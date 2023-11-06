#include <stdlib.h>
#include <string.h>
#include "tabela_hash.h"

struct hash
{
    int qtd, TABLE_SIZE;
    struct aluno **itens;
};

Hash *criaHash(int TABLE_SIZE)
{
    Hash *ha = (Hash *)malloc(sizeof(Hash));
    if (ha != NULL)
    {
        int i;
        ha->TABLE_SIZE = TABLE_SIZE;
        ha->itens = (struct aluno **)malloc(TABLE_SIZE * sizeof(struct aluno *));
        if (ha->itens == NULL)
        {
            free(ha);
            return NULL;
        }
        ha->qtd = 0;
        for (i = 0; i < ha->TABLE_SIZE; i++)
        {
            ha->itens[i] = NULL;
        }
    }
    return ha;
}

void liberaHash(Hash *ha)
{
    if (ha != NULL)
    {
        int i;
        for (i = 0; i < ha->TABLE_SIZE; i++)
        {
            if (ha->itens[i] != NULL)
            {
                free(ha->itens[i]);
            }
        }
        free(ha->itens);
        free(ha);
    }
}

int valorString(char *str)
{
    int i, valor = 7;
    int tam = strlen(str);
    for (size_t i = 0; i < tam; i++)
    {
        valor = 31 * valor + (int)str[i];
    }
    return valor;
}

int insereHash_SemColisao(Hash *I, struct aluno al)
{
    if (I == NULL || I->qtd == I->TABLE_SIZE)
    {
        return 0;
    }
    int chave = al.matricula;
    int pos = valorString(al.nome);
    struct aluno *novo;
    novo = (struct aluno *)malloc(sizeof(struct aluno));
    if (novo == NULL)
    {
        return 0;
    }
    *novo = al;
    I->itens[pos] = novo;
    I->qtd++;
    return 1;
}