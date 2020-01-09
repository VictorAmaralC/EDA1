#include <stdio.h>

int main(){
    int pax=1, pay=1, pbx, pby, passo, encontro=0, n, m, movimentos, a, b, ex, ey, p;

    scanf("%d %d", &n, &m);
    scanf("%d", &movimentos);

    pbx = m;
    pby = n;

    for(passo = 1; passo != movimentos+1; passo++){
        scanf("%d %d", &a, &b);
        if(a == 1) pay++;
        if(a == 2) pay--;
        if(a == 3) pax++;
        if(a == 4) pax--;
        if(b == 1) pby++;
        if(b == 2) pby--;
        if(b == 3) pby++;
        if(b == 4) pby--;

        if(encontro == 0){
            if(pax == pbx && pay == pby){
                encontro = 1;
                ex = pax;
                ey = pay;
                p = passo;
            } else if(pax > m || pay > n || pax < 1 || pay < 1){
                encontro = 2;
                ex = pax;
                ey = pay;
                p = passo;
            } else if(pbx > m || pby > n || pbx < 1 || pby < 1){
                encontro = 3;
                ex = pbx;
                ey = pby;
                p = passo;
            } 
        }
    } 

    if(encontro == 0) printf("Nao se encontraram\n");
    if(encontro == 1) printf("Encontraram-se na posicao (%d,%d) no passo %d\n", ex, ey, p);
    if(encontro == 2) printf("PA saiu na posicao (%d,%d) no passo %d\n", ex,ey,p);
    if(encontro == 3) printf("PB saiu na posicao (%d,%d) no passo %d\n", ex,ey,p);
    
    return 0;
}