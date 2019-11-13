#include <stdio.h>
#include <stdlib.h>

typedef struct botas{
  char pe;
  int tamanho;
  int par;
  struct botas *prox;
}bota;

void construtor(bota **p){
  *p=NULL;
}

void insere(bota **p, int tamanho, char pe){
  bota *aux;
  aux = malloc(sizeof(bota));
  aux->tamanho = tamanho;
  aux->pe = pe;
  aux->par = 0;
  aux->prox = (*p);
  (*p) = aux;
}

int main(){
  int tamanho, pares=0;
  char pe;

  bota *head = malloc (sizeof(bota));
  construtor(&head);

  while(scanf("%d %c", &tamanho, &pe) != EOF){
    insere(&head, tamanho, pe);
  }

  while (head != NULL)
  {
    bota *aux;
    aux = head->prox;
    if(head->par == 0){
      while (aux != NULL){
        if (head->par == 0 && aux->par == 0)
        {
          if (aux->tamanho == head->tamanho && aux->pe != head->pe)
          {
          head->par = 1;
          aux->par = 1;
          pares++; 
          break;
          }
        }
        aux = aux->prox;
      }
    }
    head = head->prox;
  }

  printf("%d\n", pares);

  return 0;
}
