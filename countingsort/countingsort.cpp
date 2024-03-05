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
    
    for(int i = 1; i <= max; i++) 
        contagem[i] += contagem[i-1];
    
    int resultado[size];
    
    for(int i = size - 1; i >= 0; i--) {
        resultado[contagem[arr[i]]-1] = arr[i];
        contagem[arr[i]]--;
    }
    
    for(int i = 0; i < size; i++)
        arr[i] = resultado[i];
        
    free(contagem);
}