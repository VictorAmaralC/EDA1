#include <stdio.h>

int main()
{
    int n, pertence = 0, i;

    scanf("%d", &n);

    int par[n], impar[n];

    for (i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        par[i] = x;
    }

    for (i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        impar[i] = x;
    }

    for (i = 0; i < n; i++)
    {
        par [i] += impar[i];
    }

    for (i = 0; i < n-1; i++)
    {
        printf("%d ", par[i]);
    }
    printf("%d\n", par[n-1]);

    return 0;
}