#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    fp = fopen(argv[1], "r");

    if (fp == NULL)
    {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    int quant = 0;
    char txt[100];
    char palavras[100][100];

    while (fgets(txt, 100, fp) != NULL)
    {
        printf("%s", txt);
        strcpy(palavras[quant], txt);
        quant++;
    }

    fclose(fp);

    bubble_sort(palavras, quant);

    FILE *f;
    f = fopen("arq_palavras_ordenado.txt", "w");

    if (f == NULL)
    {
        perror("Erro ao criar o arquivo de saída");
        return 1;
    }

    for (int i = 0; i < quant; i++)
    {
        fprintf(f, "%s", palavras[i]);
    }

    fclose(f);

    return 0;

    /*   FILE *fp;

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

       FILE *f;

       f = fopen("arq_palavras_ordenado.txt", "w");
       if (f == NULL)
       {
           perror("Nao foi possivel abrir o arquivo");
           exit(1);
       }

       fscanf(fp, "%s", txt);

       fclose(fp);

       fclose(f);

       exit(0);*/
}