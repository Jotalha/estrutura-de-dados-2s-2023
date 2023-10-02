#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(int argc, char *argv[])
{

    Palavra o1, o2;

    Palavra *o;
    o1.valor = 'a';
    o2.valor = 'b';

    Pilha *P = pilha();
    empilhar(&o1, P);
    empilhar(&o2, P);

    do
    {
        o = desempilhar(P);

        if (o != NULL)
        {
            printf("Valor desempilhado: %c\n", o->valor);
        }
    } while (o != NULL);

    exit(0);
}