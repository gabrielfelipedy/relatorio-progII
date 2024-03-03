void troca(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

int particao(int array[], int p, int r)
{	
	int pivo = array[(p+r)/2];
	
	int i = p - 1;
	int j = r + 1;

	while(i < j) {
		do {

			j--;

		} while(array[j] > pivo);
		do {

			i++;

		} while(array[i] < pivo);
		
		if(i < j) troca(&array[i], &array[j]);
	}

	return j;
}

void quick_sort(int array[], int p, int r) {

	int q;
	if(p < r) {
		q = particao(array, p, r);
		quick_sort(array, p, q);
		quick_sort(array, q+1, r);
	}
}