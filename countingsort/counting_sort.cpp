#include <cstdio>
#include <cstdlib>

int getmax(int arr[], int size)
{
    int maximo = arr[0];
    
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > maximo) maximo = arr[i];
    }
    
    return maximo;
}

void counting_sort(int arr[], int size)
{
    int max = getmax(arr, size);
    
    int* contagem = (int*)calloc((max+1), sizeof(int));
    
    for(int i = 0; i < size; i++) 
        contagem[arr[i]]++;
    
    
    for(int i = 1; i <= size; i++) 
        contagem[i] += contagem[i-1];
    
    int* resultado = (int*)malloc(size * sizeof(int));
    
    for(int i = size - 1; i >= 0; i--) {
        resultado[contagem[arr[i] - 1]] = arr[i];
        contagem[arr[i]]--;
    }
    
    for(int i = 0; i < size; i++)
        arr[i] = resultado[i];
        
    free(resultado);
    free(contagem);
}

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
        
    putchar('\n');
}

int main() {
    int array[] = {4, 1, 3, 2};

    int size = sizeof(array) / sizeof(array[0]);

    print_array(array, size);
    counting_sort(array, size);
    print_array(array, size);
    
    return 0;
}