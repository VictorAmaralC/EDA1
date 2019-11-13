#include <stdio.h>
#include <stdlib.h>
//#include "fila_encadeada.h"
//#include "fila_circular.h"
#include "fila_int.h"

void acessaMenu();
void menu();
void op1();
void op2();
void op3();
void op4();

int main(){
    cria_fila();
    acessaMenu();
return 0;
}

void menu(){
    printf("-------------------------------------------------------\n");
    printf("                     MENU FILA                         \n");
    printf("-------------------------------------------------------\n");
    printf("\t Por favor selecione a opção desejada:\n");
    printf(" (1) Inserir elementos na fila\n");
    printf(" (2) Remover elementos da fila\n");
    printf(" (3) Imprimir a Fila\n");
    printf(" (4) Reinicia a Fila\n");
    printf(" (5) Sair\n");
    printf("-------------------------------------------------------\n");
    printf("Digite a opção:");
}

void acessaMenu(){
    char op = '0';
    menu();
    while(op != '5'){
        scanf(" %c", &op);
        switch(op){
            case '1':
                op1();
                menu();
                break;
            case '2':
                op2();
                menu();
                break;
            case '3':
                op3();
                menu();
                break;
            case '4':
                op4();
                menu();
                break;
            case '5':
                libera();
                system("clear");
                break;
            default:
                printf("\nEntrada Inválida, digite novamente: ");
        }
    }
}

void op1(){
    int qnt, elem;

    printf("Digite quantos elementos você deseja inserir:\n");
    scanf("%d", &qnt);
    printf("Digite a seguir, os elementos a serem inseridos:\n");

    for(int i = 1; i <= qnt; i++){
        printf("Elemento (%d): ", i);
        scanf("%d", &elem);
        while(elem > 999 || elem < 1){
            printf("Elemento inválido, digite novamente:\n");
            printf("Elemento (%d): ", i);
            scanf("%d", &elem);
        }
        if(enfileira(elem)){
            printf("Elemento %d inserido!\n", elem);
        }
        else{
            printf("Impossível adicionar mais elementos, a fila está cheia!!\n");
            break;
        }
    }
    system("clear");
}

void op2(){
    int qnt, elem;

    printf("Digite quantos elementos você deseja remover:\n");
    scanf("%d", &qnt);
    system("clear");
    if(fila_vazia()){
        printf("A fila está vazia!!\n");
    }
    else{
        for(int i = 0; i < qnt; i++){
            if(fila_vazia()){
                printf("Impossível remover mais elementos, a fila está vazia!!\n");
                break;
            }
            else{
                printf("Elemento removido: %d\n", desenfileira(&elem));
            }
        }
    }
}

void op3(){
    system("clear");
    print_fila();
}

void op4(){
    reinicia_fila();
    system("clear");
}