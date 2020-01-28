#include <stdio.h>

int main()
{
    int n, i, media=0, j=0;

    scanf("%d", &n);

    int par[n], impar[n];

    for (i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        par[i] = x;
        media+=x;
    }

    media /= n;

    for (i = 0; i < n; i++)
    {
        if(par[i] > media){
            impar[j] = par[i];
            j++;
        }
    }

    for (i = 0; i < j-1; i++)
    {
        printf("%d ", impar[i]);
    }
    printf("%d\n", impar[j-1]);

    return 0;
}