#include <stdio.h>

int main()
{
    int array[4] = {5, 7, 9, 6};
    int i = 0, resultado = 0;

    for (i = 0; i < 4; i++)
    {
        resultado += array[i];
    }

    printf("O resultado da soma e: %d", resultado);
    return 0;
}