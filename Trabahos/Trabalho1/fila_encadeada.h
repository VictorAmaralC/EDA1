#ifndef _fila_encadeada_h
#define _fila_encadeada_h

struct elemFila {
    int dado;
    struct elemFila *prox;
};
typedef struct elemFila ElemFila;

ElemFila *aloca();
void cria_fila();
int enfileira(int y);
int desenfileira(int *y);
void libera();
int fila_vazia();
int fila_cheia();
void print_fila();
int tam_fila();

#endif