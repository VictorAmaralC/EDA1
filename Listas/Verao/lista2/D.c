#include <stdio.h>

int main()
{
    int n, a, pertence = 0;

    scanf("%d", &n);

    int par[n];

    for (int i=0; i < n; i++){
        int x;
        scanf("%d", &x);
        par[i] = x;
    }

    scanf("%d", &a);

    for(int j = 0; j < n; j++){
        if(par[j] == a)
            pertence = 1;
    }

    if(pertence == 1)
        printf("pertence\n");
    else
        printf("nao pertence\n");

    return 0;
}