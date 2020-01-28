#include <stdio.h>

int main(){
    int pax=1, pay=1, pbx, pby, pa, pb; 
    int passo, n, m, movimentos;
    int ex, ey, p, encontro = 0;

    scanf("%d %d", &n, &m);
    scanf("%d", &movimentos);
    pby = m;
    pbx = n;

    for(passo=1; passo <= movimentos; passo++){
        scanf("%d %d", &pa, &pb);
        if(pa == 1) pay++;
        if(pa == 2) pay--;
        if(pa == 3) pax++;
        if(pa == 4) pax--;
        if(pb == 1) pby++;
        if(pb == 2) pby--;
        if(pb == 3) pbx++;
        if(pb == 4) pbx--;

        if(encontro == 0){
            if(pax == pbx && pay == pby){
                encontro = 1;
                ex = pax;
                ey = pay;
                p = passo;
            }
            else if (pax > n || pay > m || pax < 1 || pay < 1){
                encontro = 2;
                ex = pax;
                ey = pay;
                p = passo;
            }
            else if (pbx > n || pby > m || pbx < 1 || pby < 1){
                encontro = 3;
                ex = pbx;
                ey = pby;
                p = passo;
            }
        }
    }

    if (encontro == 0)
        printf("Nao se encontraram\n");
    else if (encontro == 1)
        printf("Encontraram-se na posicao (%d,%d) no passo %d\n", ex, ey, p);
    else if (encontro == 2)
        printf("PA saiu na posicao (%d,%d) no passo %d\n", ex, ey, p);
    else if (encontro == 3)
        printf("PB saiu na posicao (%d,%d) no passo %d\n", ex, ey, p);

    return 0;
}