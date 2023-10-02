#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(int argc, char *argv[])
{

    Pilha *P = pilha();

    int opt =0;

    /*do{
        printf("\t1 - Registrar coordenada (x, y) \n");
        scanf("%d", opt);

        switch (opt)
        {
        case 1:{
            printf("Entrou no case 1");*/
            Ponto *ponto = registrar_coord();
            empilhar(ponto, P);
            Ponto *ponto2 = registrar_coord();
            empilhar(ponto2, P);
            Ponto *ponto3 = registrar_coord();
            empilhar(ponto3, P);/*
        }
             code 
            break;
        
        default:
            break;
        }

    }while(opt != 0);*/

    Ponto *o;

    do
    {
        o = desempilhar(P);

        if (o != NULL)
        {
            printf("Coordenada desempilhada: (%d, %d)\n", o->x, o->y);
        }
    } while (o != NULL);

    exit(0);
}