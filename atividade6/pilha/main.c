#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(int argc, char *argv[])
{

    /*Ponto *p1;
    Ponto *p2;
    Ponto *p3;
    Ponto *p4;

    p1->x = 1;
    p1->y = 2;
    p2->x = 3;
    p2->y = 4;
    p3->x = 5;
    p3->y = 6;
    p4->x = 7;
    p4->y = 8;*/
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
            empilhar(ponto, P);/*
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