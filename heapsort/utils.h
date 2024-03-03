#ifndef _H_UTILS
#define _H_UTILS

#include <sys/time.h>
#include <vector>

void print_array(int arr[], int size);
double calcula_tempo(struct timeval start, struct timeval end);
void escreveArquivo(std::vector<double> times, const char* file);
std::vector<double> abreArquivo(std::vector<double> times, const char* name);

#endif