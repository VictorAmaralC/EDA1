#include <stdio.h>

int main(){
    int numero;

    scanf("%d", &numero);

    for(int i = 1; i <= numero; i++){
        for(int k = i; k < numero; k++){
            printf(" ");
        }
        for(int j = 1; j < ((i*2)-1); j++){
            printf("*");
        }
        printf("*\n");
    }
    
    return 0;
}