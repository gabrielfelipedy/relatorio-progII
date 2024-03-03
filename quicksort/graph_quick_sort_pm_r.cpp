#include <cstdio>
#include <sys/time.h>
#include <time.h>
#include <cstdlib>
#include <vector>
#include <iostream>
#include "matplotlibcpp.h"
#include "utils.h"

namespace plt = matplotlibcpp;

int main() {
	//srand(time(NULL));

	std::vector<double> times;
	times = abreArquivo(times, "quick_sort_pm_r.txt");

	plt::plot(times);
	plt::show();
	plt::close();

	return 0;
}