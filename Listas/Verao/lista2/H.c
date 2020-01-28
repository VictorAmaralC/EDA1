#include <stdio.h>

int main(){
    int Nrotulos, tipos, x;

    scanf("%d %d", &Nrotulos, &tipos);
    int rotulos[tipos];

    for (int i = 1; i <= tipos; i++)
    {
        rotulos[i] = 0;
    }

    for(int i=1; i <= Nrotulos; i++){
        scanf("%d", &x);
        rotulos[x]++;
    }

    x=Nrotulos/tipos;
    
    for(int i = 1; i <= tipos; i++){
        if(rotulos[i] < x) x = rotulos[i];
    }

    printf("%d\n", x);

    return 0;
}