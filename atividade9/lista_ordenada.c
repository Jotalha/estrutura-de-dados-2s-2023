#include <stdio.h>
#include <stdlib.h>
#include "lista_ordenada.h"

No *no(char valor, No *proximo_no)
{
    No *no = malloc(sizeof(No));
    no->valor = valor;
    no->proximo_no = proximo_no;
    return no;
}

void lista_inserir_no_ordenado(No **L, No *no)
{
    if (*L != NULL)
    {
        if ((*L)->valor >= no->valor)
        {
            no->proximo_no = *L;
            *L = no;
        }
        else if ((*L)->proximo_no != NULL)
        {
            lista_inserir_no_ordenado(&(*L)->proximo_no, no);
        }
        else
        {
            (*L)->proximo_no = no;
        }
    }
}

void lista_imprimir(No *L)
{
    if (L != NULL)
    {
        printf("%.2f | ", L->valor);
        lista_imprimir(L->proximo_no);
    }
}

int lista_verificar_existencia(No *L, char valor_busca)
{
    if (L != NULL)
    {
        if (L->valor == valor_busca)
        {
            return 1;
        }
        else
        {
            return lista_verificar_existencia(L->proximo_no, valor_busca);
        }
    }
    return 0;
}

int lista_verificar_ocorrencias(No *L, char valor_busca)
{
    if (L != NULL)
    {
        if (L->valor == valor_busca)
        {
            return 1 + lista_verificar_ocorrencias(L->proximo_no, valor_busca);
        }
        else
        {
            return lista_verificar_ocorrencias(L->proximo_no, valor_busca);
        }
    }
    return 0;
}

void lista_liberar(No *L)
{
    if (L != NULL)
    {
        lista_liberar(L->proximo_no);
        free(L);
    }
}