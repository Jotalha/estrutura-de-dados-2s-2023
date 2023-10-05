#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

void imprimir_arr(int arr[], int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[])
{

    FILE *fp;

    fp = fopen(argv[1], "r");

    int quant = 0;

    char txt[100];
    while (!feof(fp))
    {
        fgets(txt, 100, fp);
        printf("%s\n", txt);
        quant++;
    }

    bubble_sort(txt, quant);

    fclose(fp);

    fp = fopen(argv[1], "r");

    while (!feof(fp))
    {
        fgets(txt, 100, fp);
        printf("%s\n", txt);
    }

    fclose(fp);

    exit(0);
}