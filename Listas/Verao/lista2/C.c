#include <stdio.h>

int main(){
    int n, pare=0, impare=0, i;

    scanf("%d", &n);

    int par[n], impar[n];

    for(i = 0; i < n; i++){
        int x;

        scanf("%d", &x);

        if(x%2 == 0){
            par[pare] = x;
            pare++;
        }
        else{
            impar[impare] = x;
            impare++;
        }
    }

    if(pare > 0){
        for (i = 0; i < pare - 1; i++)
        {
            printf("%d ", par[i]);
        }
        printf("%d\n", par[pare - 1]);
    } else printf("\n");

    if(impare > 0){
        for (i = 0; i < impare - 1; i++)
        {
            printf("%d ", impar[i]);
        }
        printf("%d\n", impar[impare - 1]);
    } else printf ("\n");

    return 0;
}