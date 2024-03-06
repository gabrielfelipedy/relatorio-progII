#include <ctime>
#include <cstdlib>
#include "utils.h"
#include "radixsort.h"

#define QTDE 999998
#define IN_CEP 66000001

int main()
{
	std::vector<double> times = {}; //armazena os tempos de execução

	int i = 1;
	while(i <= QTDE)
	{
		int vet[i];

		for(int j = 0; j < i; j++)
			vet[j] = IN_CEP + j;

		struct timeval start, end;

		gettimeofday(&start, NULL);
		radixsort(vet, i);
		gettimeofday(&end, NULL);

		double milliseconds = calcula_tempo(start, end);

		times.push_back(milliseconds);

		i++;
	}
	
	escreveArquivo(times, "radixsort_c.txt");

	return 0;
}