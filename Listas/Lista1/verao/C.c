#include <stdio.h>

int main(){
    int a, b,c,d,maior;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    maior = a;
    if(maior<b) maior = b;
    if(maior<c) maior = c;
    if(maior<d) maior = d;

    printf("%d\n", maior);

    return 0;
}