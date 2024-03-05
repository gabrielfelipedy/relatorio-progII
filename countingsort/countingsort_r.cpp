#include <ctime>
#include <cstdlib>
#include "utils.h"
#include "countingsort.h"

#define QTDE 100000

int main() {
	srand(time(NULL));

	std::vector<double> times = {}; //armazena os tempos de execução

	int i = 1;
	while(i <= QTDE)
	{
		int vet[i];

		for(int j = 0; j < i; j++)
			vet[j] = rand() % QTDE;

		struct timeval start, end;

		gettimeofday(&start, NULL);
		counting_sort(vet, i);
		gettimeofday(&end, NULL);

		double milliseconds = calcula_tempo(start, end);

		times.push_back(milliseconds);

		i++;
	}
	
	escreveArquivo(times, "countingsort_r.txt");

	return 0;
}