#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{

    FILE *f;

    f = fopen(argv[1], "w");
    if (f == NULL)
    {
        perror("Nao foi possivel abrir o arquivo");
        exit(1);
    }

    fprintf(f, "Teste de escrita\n");

    fclose(f);

    exit(0);
}