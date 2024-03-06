#include <ctime>
#include <cstdlib>
#include "utils.h"
#include "radixsort.h"

#define QTDE 100000

int main()
{
	std::vector<double> times = {}; //armazena os tempos de execução

	int i = 1;
	while(i <= QTDE)
	{
		int vet[i];

		for(int j = 0; j < i; j++)
			vet[j] = i - j - 1;

		struct timeval start, end;

		//print_array(vet, i);
		gettimeofday(&start, NULL);
		radixsort(vet, i);
		gettimeofday(&end, NULL);
		//print_array(vet, i);

		double milliseconds = calcula_tempo(start, end);

		times.push_back(milliseconds);

		i++;
	}
	
	escreveArquivo(times, "radixsort_d.txt");

	return 0;
}