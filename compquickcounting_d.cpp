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
	times_q = abreArquivo(times_q, "quicksort/quick_sort_pm_d.txt");
    times_m = abreArquivo(times_m, "countingsort/countingsort_d.txt");

	plt::named_plot("Quick Sort", times_q);
    plt::named_plot("Counting Sort", times_m);
   
    plt::title("Comparação Quick Sort e Counting Sort: elementos em ordem decrescente");
    plt::legend();
    plt::xlabel("Número de elementos no array");
    plt::ylabel("Tempo de execução (ms)");

	plt::show();
	plt::close();

	return 0;
}