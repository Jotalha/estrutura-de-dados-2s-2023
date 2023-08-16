#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, resultado = 0;
    int array[8] = {5, 7, 9, 6, 7, 11, 6, 5};
    int busca = 7;

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        if (array[i] == busca)
        {
            resultado++;
        }
    }

    printf("%d\n", resultado); // Isso imprimirá "0"

    return 0;
}