#include <stdio.h>

void ultrapassa(int *vetor, int limite, int soma, int tamanhoV, int aux){
    if(aux > tamanhoV) return;

    soma += vetor[aux];
    aux++;
    
    if(soma > limite){
        ultrapassa(vetor, limite, 0, tamanhoV, aux);
        printf("%d\n", vetor[aux-1]);
    }else{
        ultrapassa(vetor, limite, soma, tamanhoV, aux);
    }

}

int main(){ 
    int n[1000], limite, i;

    for (i=0; n != 0; i++){
        scanf("%d", &n[i]);
        if(n[i]==0) break;
    }
    scanf("%d", &limite);

    ultrapassa(n, limite, 0, i, 0);

    return 0;
}