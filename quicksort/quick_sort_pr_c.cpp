#include <cstdio>
#include <sys/time.h>
#include <time.h>
#include <cstdlib>
#include <vector>
#include <iostream>
#include "quicksort_r.h"
#include "utils.h"

#define QTDE 100000

int main()
{
	srand(time(NULL));

	std::vector<double> times = {}; //armazena os tempos de execução

	int i = 1;
	while(i <= QTDE)
	{
		int vet[i];

		for(int j = 0; j < i; j++)
			vet[j] = j;

		struct timeval start, end;

		gettimeofday(&start, NULL);
		quick_sort(vet, 0, i-1);
		gettimeofday(&end, NULL);

		double milliseconds = calcula_tempo(start, end);

		times.push_back(milliseconds);

		i++;
	}
	
	escreveArquivo(times, "quick_sort_pr_c.txt");

	return 0;
}