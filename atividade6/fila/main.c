#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.h"

int main(int argc, char *argv[])
{

    int opt = 0;

    Fila *F = fila();

    do
    {
        printf("Digite a opcao desejada: \n");
        printf("\t1 - Registrar cliente na fila \n");
        printf("\t2 - Chamar o proximo cliente \n");
        // printf("\t3 - Consultar a posicao de um cliente \n");
        printf("\t3 - Limpar a fila \n");
        printf("\t0 - Fechar menu \n");

        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
        {

            Cliente *cliente = registrar(F);
            enfileirar(cliente, F);
        }
        break;
        case 2:
        {
            Cliente *o = NULL;

            o = desenfileirar(F);
            if (o != NULL)
            {
                printf("\nChamando o cliente:  %s\n", o->nome);
            }
            else
            {
                printf("Fila vazia\n");
            }
        }
        break;
        /*case 3:
        {
            consultar_pos(F);
        }
        break;*/
        case 3:
        {
            Cliente *o = NULL;
            do
            {
                o = desenfileirar(F);
                if (o != NULL)
                {
                    printf("Tirando da fila %s\n", o->nome);
                }
            } while (o != NULL);
        }
        break;

        default:
            break;
        }
    } while (opt != 0);

    exit(0);
}