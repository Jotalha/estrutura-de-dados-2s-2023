typedef struct Ponto
{
    int x;
    int y;
    struct Ponto *proximo_ponto;
} Ponto;

typedef struct
{
    Ponto *topo;
    int quantidade;
} Pilha;

Pilha *pilha();
void empilhar(Ponto *o, Pilha *P);
Ponto *desempilhar(Pilha *P);
Ponto *registrar_coord();