#include <cstdio>
#include <sys/time.h>
#include <time.h>
#include <cstdlib>
#include <vector>
#include <iostream>
#include "matplotlibcpp.h"
#include "utils.h"

namespace plt = matplotlibcpp;

int main()
{
	std::vector<double> times_c;
    std::vector<double> times_d;
    std::vector<double> times_r;
	times_c = abreArquivo(times_c, "heapsort_c.txt");
    times_d = abreArquivo(times_d, "heapsort_d.txt");
    times_r = abreArquivo(times_r, "heapsort_r.txt");

	plt::named_plot("Crescente", times_c);
    plt::named_plot("Decrescente", times_d);
    plt::named_plot("Aleatório", times_r);
    plt::title("HeapSort - Comparação de entradas");
    plt::legend();
    plt::xlabel("Número de elementos no array");
    plt::ylabel("Tempo de execução (ms)");

	plt::show();
	plt::close();

	return 0;
}