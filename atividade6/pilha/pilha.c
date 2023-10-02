#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha *pilha()
{
    Pilha *p1 = (Pilha *)malloc(sizeof(Pilha));
    p1->topo = NULL;
    p1->quantidade = 0;
    return p1;
}

void empilhar(Palavra *o, Pilha *P)
{
    printf("Empilhando: %c\n", o->valor);
    o->proximo_palavra = P->topo;
    P->topo = o;
    P->quantidade++;
}

Palavra *desempilhar(Pilha *P)
{
    if (P->quantidade == 0)
    {
        printf("Pilha vazia!\n");
        return NULL;
    }

    Palavra *o = P->topo;
    printf("Desempilhando: %c\n", o->valor);
    P->topo = o->proximo_palavra;
    P->quantidade--;
    return o;
}
