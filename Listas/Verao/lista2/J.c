#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ultimoNome(char *str, int i){
    if (*str == ' ') return;
    else {
        ultimoNome(str, i-1);
        printf("%c", str[i]);
    }
}

int main(){
    char *nome = malloc(100*sizeof(char)), nomeCompleto[101][101];
    int i, j = 0, k = 0;
        
    fgets(nome, 101, stdin);

    for (i = 0; nome[i] != ' '; i++, k++){
        nome[i] = tolower(nome[i]);
        nomeCompleto[0][k] = nome[i];
    }
    
    printf("%s.", nomeCompleto[0]);

    ultimoNome(nome, strlen(nome)-1);

    printf("@unb.br\n");

    return 0;
}

