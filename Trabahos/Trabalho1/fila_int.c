#include <stdio.h>
#include "fila_int.h"

#define N 10

static int fila_int[N];
static int p, u;

void cria_fila(){
    p = 0; u = 0;
}

int enfileira(int y){
    if(fila_cheia()){
        return 0;
    }
    fila_int[u++] = y;
return 1;
}

int desenfileira(int *y){
    *y = fila_int[p];
    fila_int[p] = 0;
return fila_int[p++];
}

int fila_vazia(){
    if( p == u ) {
    cria_fila();
    }
return p == u;
}

int fila_cheia(){
return u == N;
}

int tam_fila(){
    int total = 0;
    for(int i = 0; i < N; i++){
        if(fila_int[i] != 0){
            total++;
        }
    }
    return total;
}

void libera(){}

void print_fila(){
    printf("-------------------------------------------------------------\n|");
    for(int i = 0; i < N; i++){
        if(fila_int[i] == 0){
            printf(" xxx |");
        }
        else{
            printf("  %d  |", fila_int[i]);
        }
    }
    printf("\n-------------------------------------------------------------\n");
    if(p == 0 && u == 0){
        printf("p  u\n");
    }
    else{
        for(int i = 0; i < N; i++){
            if(fila_int[i] != 0){
                printf(" p ");
                break;
            }
            else{
                printf("    ");
            }
        }
        for(int i = 0; i < N; i++){
            if(fila_int[i] != 0 && fila_int[i+1] == 0){
                printf("  u  \n");
                break;
            }
                else{
                printf("     ");
            }
        }
    }
}