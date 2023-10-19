#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char *argv[])
{

    No *n0 = no('C', NULL);
    No *n1 = no('E', NULL);
    No *n2 = no('A', no('D', no('B', no('X', no('Z', NULL)))));
    No *n3 = no('U', NULL);
    lista_inserir_no(n0, n2);
    lista_inserir_no(n0, n1);
    lista_inserir_no(n0, n3);
    lista_imprimir(n0);

    printf("\nqtd nos: %d", lista_quantidade_nos(n0));

    printf("\n");
    No *n_copia = lista_copiar(n0);
    printf("\n");
    lista_imprimir(n_copia);

    printf("\n");
    lista_concatenar(n0, n_copia);
    printf("\n");
    lista_imprimir(n0);

    printf("\n");
    char valor_busca = 'C';
    printf("Retorno verificar_existencia: %d", lista_verificar_existencia(n0, valor_busca));

    printf("\n");
    char valor_busca_ocorrencia = 'C';
    printf("Retorno verificar_ocorrencia: %d", lista_verificar_ocorrencias(n0, valor_busca_ocorrencia));

    printf("\n");
    lista_imprimir_inversa(n0);

    printf("\n");
    int i = 3;
    char valor = 'K';
    lista_inserir_no_i(n0, i, valor);
    lista_imprimir(n0);

    printf("\n");
    int j = 3;
    lista_remover_no_i(n0, j);
    lista_imprimir(n0);

    printf("\n");
    char valor_busca_remover = 'E';
    lista_remover_no(n0, valor_busca_remover);
    lista_imprimir(n0);

    /*printf("\n");
    lista_liberar(n0);
    n0 = NULL;
    lista_imprimir(n0);
    */

    exit(0);
}