#include<stdio.h>
#include<stdlib.h>

typedef struct pCordenada {
    int coluna;
    int valor;
    struct pCordenada *prox;
} pCordenada;

void construtor(pCordenada **head){
    *head = NULL;
}

void insere(pCordenada **matriz, int linha, int coluna, int valor){
    pCordenada *new = malloc (sizeof(pCordenada));
    new->coluna = coluna;
    new->valor = valor;
    new->prox = NULL;

    if(matriz[linha] == NULL){
        matriz[linha] = new;
    } else {
        pCordenada *curry = matriz[linha];
        pCordenada *prev = NULL;

        while(curry != NULL){
            if(curry->coluna > coluna){
                if(prev == NULL){
                    matriz[linha] = new;
                    new->prox = curry;
                    return;
                }
                prev->prox = new;
                new->prox = curry;
                return;
            }
            prev = curry;
            curry = curry->prox;
        }
        prev->prox = new;
        return;
    }
}

int soma(pCordenada *head, int vetor[]){
    int total = 0;
    while(head != NULL){
        total += head->valor * vetor[head->coluna];
        head = head->prox;
    }
    return total;
}

int main(){
    int n, m, linha, coluna, valor;

    scanf("%d %d", &m, &n);
    pCordenada *matriz[m];
    int vetor[n], result[n];

    for(int i=0; i<n; i++){
        construtor(&matriz[i]);
    }

    for(int i=0; i<n; i++){
        scanf("%d", &vetor[i]);
    }

    while(scanf("%d %d %d", &linha, &coluna, &valor) != EOF){
        insere(matriz, linha, coluna, valor);
    }

    for(int i=0; i<n; i++){
        result[i] = soma(matriz[i], vetor);
    }

    for (int i = 0; i < n; i++){
        printf("%d\n", result[i]);
    }

    return 0;
}