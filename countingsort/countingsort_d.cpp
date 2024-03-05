#include <ctime>
#include <cstdlib>
#include "utils.h"
#include "heapsort.h"

#define QTDE 100000

int main()
{
	std::vector<double> times = {}; //armazena os tempos de execução

	int i = 1;
	while(i <= QTDE)
	{
		int vet[i];

		for(int j = 0; j < i; j++)
			vet[j] = i-j-1;

		struct timeval start, end;

		gettimeofday(&start, NULL);
		heapsort(vet, i);
		gettimeofday(&end, NULL);

		double milliseconds = calcula_tempo(start, end);

		times.push_back(milliseconds);

		i++;
	}
	
	escreveArquivo(times, "heapsort_d.txt");

	return 0;
}