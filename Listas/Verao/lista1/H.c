#include <stdio.h>

int main()
{
    int gasto, conta;

    scanf("%d", &gasto);

    if(gasto < 11) conta = 7;
    if(gasto > 10 && gasto < 31) conta = 7 + ((gasto-10) * 1);
    if(gasto > 30 && gasto < 101) conta = 27 + ((gasto-30) * 2);
    if(gasto > 100) conta = 167 + ((gasto-100) * 5);

    printf("%d\n", conta);

    return 0;
}