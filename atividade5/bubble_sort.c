#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"
#include <string.h>

void swap(char *n1, char *n2)
{
    char tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}

void bubble_sort(char arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - 1 - i; j++)
        {

            if (strcmp(&arr[j], &arr[j + 1]) > 0)
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}