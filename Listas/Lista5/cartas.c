#include <stdio.h>

int main(){
  int n, aux, restantes;
  scanf("%d", &n);
  int pilha[n+1], descarte[n-1];

  for(int i=1; i <= n; i++){
    pilha[i-1] = i;
  }

  for(int j=0, restantes=n; restantes>1; j++, restantes--){
    int k=0;
    aux=pilha[1];
    descarte[j]=pilha[0];

    while(k < 2){
      for(int i=0; i<restantes; i++){
        pilha[i]=pilha[i+1];
      }
      k++;
    }
    pilha[restantes-2]=aux;
    if(restantes-2 == 1){
      descarte[j+1]=pilha[0];
      pilha[0]=pilha[1];
      break;
    }
  }
  printf("Cartas descartadas: ");
  for(int i=0; i<n-1; i++){
    if(i+1!=n-1)
      printf("%d, ", descarte[i]);
    else printf("%d\n", descarte[i]);
  }
  printf("Carta restante: %d\n", pilha[0]);
  return 0;
}
