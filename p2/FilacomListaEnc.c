#include <stdio.h>
#include <stdlib.h>

int contador = 0;

typedef struct pLista{
  int valor;
  struct pLista *prox;
} pLista;

void construtor(pLista **p){
  *p = NULL;
}

void insere(pLista **p, int valor){
  pLista *aux;
  if(*p == NULL){
    aux = malloc(sizeof(pLista));
    aux->valor = valor;
    aux->prox = (*p);
    (*p) = aux;
  } else{
    aux = *p;
    pLista *temp;
    temp = aux->prox;
    while(aux -> prox != NULL){
      aux = aux->prox;
      temp = temp->prox;
    }
    temp = malloc(sizeof(pLista));
    temp->valor = valor;
    temp->prox = NULL;
    aux->prox = temp;
  }
  contador++;
}

void retira(pLista **p){
  pLista *aux;
  if(*p == NULL){
    return;
  }else{
    aux = malloc (sizeof(pLista));
    aux = *p;
    *p = (*p)->prox;
    aux->prox = NULL;
    free(aux);
  }
  contador--;
}

int main() {
  pLista *head = (pLista*) malloc(sizeof(pLista));
  construtor(&head);

  insere(&head, 12);
  insere(&head, 22);
  insere(&head, 32);
  insere(&head, 42);
  retira(&head);
  retira(&head);

  for(int i=0; i<contador; i++){
    printf("%d\n", head->valor);
    head = head->prox;
  }

  return 0;
}
