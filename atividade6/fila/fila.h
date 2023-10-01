typedef struct Cliente
{
    char nome[50];
    int posicao;
    struct Cliente *cliente_anterior;
} Cliente;

typedef struct Fila
{
    Cliente *inicio;
    Cliente *final;
    int quantidade_clientes;
} Fila;

Fila *fila();
Cliente *registrar();
void enfileirar(Cliente *o, Fila *F);
Cliente *desenfileirar(Fila *F);
// void consultar_pos(Fila *F);
