#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, resultado[4];
    int array1[4] = {5, 7, 9, 6};
    int array2[4] = {5, 7, 9, 6};

    for (int i = 0; i < sizeof(array1) / sizeof(array1[0]); i++)
    {
        resultado[i] = array1[i] * array2[i];
        printf("%d\n", resultado[i]);
    }

    return 0;
}