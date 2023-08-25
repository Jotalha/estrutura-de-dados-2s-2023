#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    float x;
    float y;
} Ponto;

int main()
{

    Ponto pontos[3];

    int i = 0;

    pontos[0].x = 4;
    pontos[1].x = -2;
    pontos[2].x = 7;
    pontos[0].y = -1;
    pontos[1].y = 6;
    pontos[2].y = 14;

    /*for (i = 0; i < 3; i++)
    {

        pontos[i].x = i + 1;

        pontos[i].y = i + 2;

        printf("Ponto %d: %.2f, %.2f\n", i + 1, pontos[i].x, pontos[i].y);
    }*/

    float media_x = 0, media_y = 0;
    float soma_x = 0, soma_y = 0;

    i = 0;
    for (i = 0; i < 3; i++)
    {
        soma_x += pontos[i].x;
        soma_y += pontos[i].y;
    }
    printf("Soma x: %.2f\n", soma_x);
    printf("Soma y: %.2f\n", soma_y);

    media_x = soma_x / 3;
    media_y = soma_y / 3;

    printf("Media de x: %.2f\n", media_x);
    printf("Media de y: %.2f\n", media_y);

    float sigma = 0, sigmaDivisor = 0;

    i = 0;
    for (i = 0; i < 3; i++)
    {
        sigma += (pontos[i].x - media_x) * (pontos[i].y - media_y);
    }
    printf("Sigma: %.2f\n", sigma);

    i = 0;
    for (i = 0; i < 3; i++)
    {
        sigmaDivisor += (pontos[i].x - media_x) * (pontos[i].x - media_x);
    }
    printf("Sigma divisor: %.2f\n", sigmaDivisor);

    float inclinacao = sigma / sigmaDivisor;

    printf("Inclinacao: %.2f\n", inclinacao);

    float intercepcao = media_y - (inclinacao * media_x);

    printf("Intercepcao: %.2f\n", intercepcao);

    printf("Equacao: y = %.2fx + %.2f\n", inclinacao, intercepcao);

    // scanf("%d,%d", &x, &y); PARA QUANDO FOR COM ARQUIVO

    /*
     if (arquivo == NULL)
     {
         printf("Erro na abertura!\n");
         system("pause");
         exit(1);
     }
     else
     {
         printf("Arquivo aberto com sucesso!\n");
     }

     char texto[100] = "Teste de escrita em arquivo - Compilador - TESTE 2";

     int retorno = fputs(texto, arquivo);
     printf("Passou do retorno\n");
     if (retorno == EOF)
     {
         printf("Erro na gravação!\n");
     }
     else
     {
         printf("Gravacao realizada com sucesso!\n");
     }

     fclose(arquivo);

    */
    return 0;
}