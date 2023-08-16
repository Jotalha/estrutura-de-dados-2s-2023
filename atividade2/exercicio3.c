#include <stdio.h>
#include <string.h>

int main()
{
    char *array[] = {"texto", "J", "EDA"};
    int tamanho = sizeof(array) / sizeof(array[0]);
    char *busca = "EDA";
    int resultado;

    for (int i = 0; i < tamanho; i++)
    {
        if (strcmp(array[i], busca) == 0)
        {
            resultado = 1;
        }
        else
        {
            resultado = 0;
        }
    }

    printf("%d\n", resultado); // Isso imprimirá "0"

    return 0;
}