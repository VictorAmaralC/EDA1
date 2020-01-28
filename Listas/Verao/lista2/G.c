#include <stdio.h>

int main(){
    int aeroportos, voos, teste=1;

    while (scanf("%d %d", &aeroportos, &voos)){
        if (aeroportos == 0 && voos == 0)
            break;
        
        int lotacao[101], maior = 0, i, chegada, saida, resultado = 0;

        for(i = 1; i < 101; i++){
            lotacao[i] = 0;
        }

        for (i = 0; i < voos; i++){
            scanf("%d %d", &saida, &chegada);
            lotacao[saida] += 1;
            lotacao[chegada] += 1;
        }

        for(i = 1; i <= aeroportos; i++){
            if(lotacao[i] > maior)
                maior = lotacao[i];
        }

        printf ("Teste %d\n", teste);
        for (i = 1; i <= aeroportos; i++){
            if(lotacao[i] == maior)
                printf("%d ", i);
        }
        printf ("\n\n");

        teste++;
    }

    return 0;
}