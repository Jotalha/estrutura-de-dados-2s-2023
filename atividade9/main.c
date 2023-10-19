#include <stdio.h>
#include <stdlib.h>
#include "lista_ordenada.h"

int main(int argc, char *argv[])
{

    No *n0 = no(9.12, NULL);

    No *n1 = no(7.32, NULL);

    No *n2 = no(9.02, NULL);

    No *n3 = no(5.65, NULL);

    lista_inserir_no_ordenado(&n0, n1);

    lista_inserir_no_ordenado(&n0, n2);

    lista_inserir_no_ordenado(&n0, n3);
    lista_imprimir(n0);

    /*printf("\n");
    lista_liberar(n0);
    n0 = NULL;
    lista_imprimir(n0);
    */

    exit(0);
}