#include <cstdio>
#include <sys/time.h>
#include <time.h>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <matplotlibcpp.h>
#include "quicksort/utils.h"

namespace plt = matplotlibcpp;

int main()
{
	std::vector<double> times_m;
    std::vector<double> times_q;
	times_q = abreArquivo(times_q, "quicksort/quick_sort_pm_r.txt");
    times_m = abreArquivo(times_m, "heapsort/heapsort_r.txt");

	plt::named_plot("Quick Sort", times_q);
    plt::named_plot("Heap Sort", times_m);
   
    plt::title("Comparação Quick Sort e Heap Sort: elementos aleatórios");
    plt::legend();
    plt::xlabel("Número de elementos no array");
    plt::ylabel("Tempo de execução (ms)");

	plt::show();
	plt::close();

	return 0;
}