#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

void imprimir_arr(int arr[], int n){
    printf("\n");
    for(int i =0; i<n; i++){
        printf("%d - ",arr[i]);
    }
     printf("\n");
}

int main(int argc, char* argv[]){
    int arr_inteiros[argc]; 

    for(int i=0; i < argc; i++){

       arr_inteiros[i] = atoi(argv[i+1]);
    }

    
    int n = sizeof(arr_inteiros)/sizeof(int);

    imprimir_arr(arr_inteiros, n);

    bubble_sort(arr_inteiros, n);

    imprimir_arr(arr_inteiros, n);

    exit(0);
}