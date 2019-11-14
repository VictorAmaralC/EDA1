#include <stdio.h>
#include <stdlib.h>

typedef struct pista
{
    int indicado;
    int valor;
    int proxIndicador;
    struct pista *prox;
} pista;

void construtor(pista **p)
{
    *p = NULL;
}

void insere(pista **p, int indicado, int valor, int proxIndicador){
    pista *aux;
    if (*p == NULL)
    {
        aux = malloc(sizeof(pista));
        aux->indicado = indicado;
        aux->valor = valor;
        aux->proxIndicador = proxIndicador;
        aux->prox = (*p);
        (*p) = aux;
    }
    else
    {
        aux = *p;
        pista *temp;
        temp = aux->prox;
        while (aux->prox != NULL)
        {
            aux = aux->prox;
            temp = temp->prox;
        }
        temp = malloc(sizeof(pista));
        temp->indicado = indicado;
        temp->valor = valor;
        temp->proxIndicador = proxIndicador;
        temp->prox = NULL;
        aux->prox = temp;
    }
}

void ordenar(pista **p){
    pista *aux, *temp, *head;
    head = *p;
    temp = aux = head->prox;

    while(head->prox != NULL){
        if(head->proxIndicador == -1) return;
        if(head->proxIndicador == temp->indicado){
            head->prox = temp;
            temp->prox= aux;
            head = head->prox;
            aux = head->prox;
            temp=head;
        }
        temp=temp->prox;
    }
}

int main()
{
    int indicado, valor, proxIndicador, n, trilha;

    pista *head = malloc(sizeof(pista));
    construtor(&head);

    scanf("%d", &n);

   for(int i=0; i<n; i++)
    {
        scanf("%d %d %d", &indicado, &valor, &proxIndicador);
        insere(&head, indicado, valor, proxIndicador);
    }


   ordenar(&head);

    while(head->prox != NULL){
        printf("%d\n", head->valor);
        head=head->prox;
    }

    return 0;
}
