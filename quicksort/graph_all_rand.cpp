#include <cstdio>
#include <sys/time.h>
#include <time.h>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <matplotlibcpp.h>
#include "utils.h"

namespace plt = matplotlibcpp;

int main()
{
	std::vector<double> times_m;
    std::vector<double> times_r;
	times_m = abreArquivo(times_m, "quick_sort_pm_r.txt");
    times_r = abreArquivo(times_r, "quick_sort_pr_r.txt");

	plt::named_plot("Pivô elemento central", times_m);
    plt::named_plot("Pivô aleatório", times_r);
   
    plt::title("Quick sort: Comparando elementos aleatórios");
    plt::legend();
    plt::xlabel("Número de elementos no array");
    plt::ylabel("Tempo de execução (ms)");

	plt::show();
	plt::close();

	return 0;
}