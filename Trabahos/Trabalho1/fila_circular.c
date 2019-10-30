#include <stdio.h>
#include <stdlib.h>
#include "fila_circular.h"

static int *fila;
static int N, p, u;

void cria_fila(){
    N = 5;
    fila = malloc( N * sizeof(int));
    p = 0; u = 0;
}

int enfileira(int y){
    int ret = 1;
    if(fila_cheia()){
        ret = redimensiona();
    }
    if(ret){
        fila[u++] = y;
        if(u == N){
            u = 0;
        }
    }
    return ret;
}

void libera(){
    free(fila);
}

int fila_cheia(){
    return (u + 1) % N == p;
}

int fila_vazia(){
    return p == u;
}

int tam_fila(){
    int total = u-p;
    if(p > u){
        total = N + total;
    }
    return total;
}

int desenfileira(int *y){
    if(!fila_vazia()){
        *y = fila[p++];
        //fila[p] = 0;
        if(p == N){
            p = 0;
        }
        return 1;
    return 0;
    }
}

void print_fila(){
    printf("-------------------------------------------------------------\n|");
    for(int i = 0; i < N; i++){
        if(fila[i] == 0){
            printf(" xxx |");
        }
        else{
            printf("  %d  |", fila[i]);
        }
    }
    printf("\n-------------------------------------------------------------\n");
    if(p == 0 && u == 0){
        printf("p  u\n");
    }
    else{
        for(int i = 0; i < N; i++){
            if(fila[i] != 0){
                printf(" p ");
                break;
            }
            else{
                printf("    ");
            }
        }
        for(int i = 0; i < N; i++){
            if(fila[i] != 0 && fila[i+1] == 0){
                printf("  u  \n");
                break;
            }
                else{
                printf("     ");
            }
        }
    }
}

int redimensiona(){
    int i, j;
    fila = realloc(fila, 2 * N * sizeof(int));
    if(fila == NULL){
        return 0;
    }
    if(u != N - 1){
        if(u-1 < N - p){
            for(i = N, j = 0; j < u; i++, j++){
                fila[i] = fila[j];
            }
            u = N + u;
        }
        else{
            for(i = p, j = N + p; i < N; i++, j++){
                fila[j] = fila[i];
            }
            p = N + p;
        }
    }
    N *= 2;
    return 1;
}
