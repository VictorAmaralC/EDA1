#include <stdio.h>

int encaixa(int a, int b){
    int aux=0, aux1=0;
    while(b>0 && aux==aux1){
        aux = a%10;
        aux1 = b%10;
        b/=10;
        a/=10;
    }
    if(aux1==aux && b<1) return 1;
    else return 0;
}
