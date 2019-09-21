#include <stdio.h>

int Hanoi(int movimento, int n){
    
    if(n == 1){
        return movimento+1;
    }
    else{
        movimento = 2*Hanoi(movimento, n-1);
    }
    return movimento;
}

int main()
{
    int n, i=1;

    while (scanf("%d", &n), n != 0){
        int k;

        k = 2*Hanoi(0, n) -1;
        printf("Teste %d\n%d\n\n", i, k);

        i++;
    }

    return 0;
}