#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.h"

Fila *fila()
{
    Fila *F = (Fila *)malloc(sizeof(Fila));
    F->inicio = NULL;
    F->quantidade_clientes = 0;

    return F;
}

Cliente *registrar(Fila *F)
{
    Cliente *o = (Cliente *)malloc(sizeof(Cliente));
    printf("Digite o nome do cliente: ");
    scanf("%s", o->nome);
    o->posicao = F->quantidade_clientes + 1;
    return o;
}

void enfileirar(Cliente *o, Fila *F)
{
    if (F->inicio == NULL)
    {
        F->inicio = o;
        F->final = o;
        o->cliente_anterior = NULL;
        o->posicao = 1;
    }
    else
    {
        F->final->cliente_anterior = o;
        F->final = o;
        o->posicao = F->quantidade_clientes + 1;
    }
    F->quantidade_clientes++;
    printf("O cliente %s esta na posicao: %d\n\n", o->nome, o->posicao);
}

Cliente *desenfileirar(Fila *F)
{
    if (F->quantidade_clientes == 0)
    {
        return NULL;
    }

    Cliente *o = F->inicio;
    F->inicio = o->cliente_anterior;

    F->quantidade_clientes--;

    return o;
}