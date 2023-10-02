typedef struct Palavra
{
    char valor[20];
    struct Palavra *proximo_palavra;
} Palavra;

typedef struct
{
    Palavra *topo;
    int quantidade;
} Pilha;

Pilha *pilha();
void empilhar(Palavra *o, Pilha *P);
Palavra *desempilhar(Pilha *P);