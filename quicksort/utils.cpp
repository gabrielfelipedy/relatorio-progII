#include <cstdio>
#include <vector>
#include <sys/time.h>

void print_array(int arr[], int size)
{
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);

	putchar('\n');
}

double calcula_tempo(struct timeval start, struct timeval end)
{
	long seconds = end.tv_sec - start.tv_sec;
	long microseconds = end.tv_usec - start.tv_usec;
	double milliseconds = seconds * 1000 + microseconds / 1000.0;

	return milliseconds;
}

void escreveArquivo(std::vector<double> times, const char* file)
{
    FILE* f = fopen(file, "w");

    for(int i = 0; i < times.size(); i++)
    {
        fprintf(f, "%f", times[i]);

        if(i < times.size() - 1) fprintf(f, ";");

		else fprintf(f, "\n");
    }

    fclose(f);
}

std::vector<double> abreArquivo(std::vector<double> times, const char* name)
{
    FILE *f = fopen(name, "r");

    double j;
    char flag = ' ';

    while(flag != '\n')
    {
        fscanf(f, "%lf%c", &j, &flag);
        times.push_back(j);
    }

    fclose(f);

	return times;
}