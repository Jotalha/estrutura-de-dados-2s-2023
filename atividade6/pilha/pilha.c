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

Ponto *registrar_coord(){
    Ponto *x = (Ponto *)malloc(sizeof(Ponto));
    printf("Aponte a coordenada (x): ");
    scanf("%d", &x->x);
    printf("Aponte a coordenada (y): ");
    scanf("%d", &x->y);
    
    return x;
}

void empilhar(Ponto *o, Pilha *P)
{
    printf("Empilhando: (%d, %d)\n", o->x, o->y);
    o->proximo_ponto = P->topo;
    P->topo = o;
    P->quantidade++;
}

Ponto *desempilhar(Pilha *P)
{
    if (P->quantidade == 0)
    {
        printf("Pilha vazia!\n");
        return NULL;
    }

    Ponto *o = P->topo;
    P->topo = o->proximo_ponto;
    P->quantidade--;
    return o;
}
