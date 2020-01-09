#include <stdio.h>

int main(){
    int numero, maior=1;

    while(scanf("%d", &numero) != EOF){
        if(maior<numero) maior = numero;
    }
    printf("%d\n", maior);

    return 0;
}