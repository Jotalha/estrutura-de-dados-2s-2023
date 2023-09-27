
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    fp = fopen("teste_leitura.txt", "r");

    char txt[100];
    while (!feof(fp))
    {
        fgets(txt, 100, fp);
        printf("%s\n", txt);
    }

    fclose(fp);

    return (0);
}