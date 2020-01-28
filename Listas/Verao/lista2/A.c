#include <stdio.h>

int main(){
    int alunos, capacidade, viagens=0;

    scanf("%d %d", &capacidade, &alunos);

    while(alunos>0){
        alunos -= capacidade-1;
        viagens++;
    }

    printf("%d\n", viagens);

    return 0;
}