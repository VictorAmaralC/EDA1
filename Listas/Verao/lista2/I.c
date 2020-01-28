#include <stdio.h>

typedef struct tipoData{
    int dia, mes, ano;
} tipoData;

typedef struct tipoPessoa{
    char nome[80];
    tipoData dtNascimento;
} tipoPessoa;

struct tipoPessoa separaInfo(char nome[80], int dtNascimento){
    tipoPessoa P;
    int i;
    for (i = 0; nome[i] != '\0'; i++) {
        P.nome[i] = nome[i];
    }
    P.nome[i] = nome[i];

    P.dtNascimento.dia = dtNascimento%100;
    P.dtNascimento.mes = (dtNascimento/100)%100;
    P.dtNascimento.ano = dtNascimento/10000;

    return P; 
}

// int main(){
//     int i = 19980905;
//     char nome[80] = "Victor Amaral Cerqueira";

//     tipoPessoa victor;
//     victor = separaInfo(nome, i);

//     printf("%s\n%02d/%02d/%d\n", victor.nome, victor.dtNascimento.dia, victor.dtNascimento.mes, victor.dtNascimento.ano);

//     return 0;
// }