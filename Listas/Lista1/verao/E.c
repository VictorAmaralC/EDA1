#include <stdio.h>

int main(){
    int numero, i, j;

    scanf("%d", &numero);

    for(i = 1; i <= numero; i++){
        for(j = 1; j < i; j++){
            printf("%02d ", i);
        }
        printf("%02d\n", i);
    }
    
    printf("\n");
    for(i = 1; i <= numero; i++){
        printf("01");
        for(j = 2; j <= i; j++){
            printf(" %02d", j);
        }
        printf("\n", j);
    }
    
    return 0;
}