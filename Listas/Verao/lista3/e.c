#include <stdio.h>

int pares(char *n, int nPares, int x) {
    if (n[x] == '\0') return nPares;
    else {
        if (n[x] == n[x+2]) nPares++;
        pares(n, nPares, x+1);
    }
}

int main(){
    char palavra[201];
    int par;

    scanf("%s", palavra);
    par = pares(palavra, 0, 0);
    printf("%d\n", par);
  
    return 0;
}