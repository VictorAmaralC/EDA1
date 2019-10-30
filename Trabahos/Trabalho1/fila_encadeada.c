#include <stdlib.h>
#include <stdio.h>
#include "fila_encadeada.h"

static int tam;
static ElemFila *Fila;

void cria_fila(){
    Fila = malloc(sizeof (ElemFila));
    Fila->dado = 0;
    Fila->prox = Fila;
    tam = 0;
}

int fila_cheia(){
    return 0;
}

int fila_vazia(){
    return Fila->prox == Fila;
}


int enfileira(int y){
    ElemFila *novo = malloc(sizeof (ElemFila));
    if(novo == NULL){
        return -1;
    }
    novo->prox = Fila->prox;
    Fila->prox = novo;
    Fila->dado = y;
    Fila=novo;
    tam++;
    return 1;
}

int desenfileira(int *y){
    if(fila_vazia()){
        return 0;
    }
    ElemFila *aux = Fila->prox;
    *y = aux->dado;
    Fila->prox = aux->prox;
    free(aux);
    tam--;
    return 1;
}

void libera(){
    if(!fila_vazia()){
        ElemFila *lixo, *prox;
        prox = Fila->prox;
        while(prox != Fila){
            lixo = prox;
            prox = lixo->prox;
            free(lixo);
        }
    }
}

int tam_fila(){
    return tam;
}

void print_fila(){
    ElemFila *aux = Fila;
    printf("-------------------------------------------------------------\n|");
    for(aux; aux->prox != Fila; aux = aux->prox){
        if(aux->dado == 0){
            printf(" xxx |");
        }
        else{
            printf("  %d  |", aux->dado);
        }
    }
    printf("\n-------------------------------------------------------------\n");
    if(tam == 0){
        printf("p  u\n");
    }
    else{
        for(aux; aux->prox != Fila; aux = aux->prox){
            if(aux->dado != 0){
                printf(" p ");
                break;
            }
            else{
                printf("    ");
            }
        }
        for(aux; aux->prox != Fila; aux = aux->prox){
            if(aux->dado != 0 && aux->prox->dado == 0){
                printf("  u  \n");
                break;
            }
                else{
                printf("     ");
            }
        }
    }
}