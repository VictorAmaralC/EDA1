#include <stdio.h>

int main(){
    unsigned long long int cpf, verificado, soma=0, aux1;

    scanf("%llu", &cpf);
    verificado = cpf/100;

    for(int i = 2; i < 11; i++){
        int aux;
        aux = (verificado % 10) * i;
        soma += aux;
        verificado /= 10;
    }
    soma %= 11;
    soma = 11 - soma;
    if(soma > 9) soma = 0;
    aux1 = soma;
    verificado = cpf/100;
    verificado = (verificado*10) + soma;

    soma = 0;
    for (int i = 2; i <= 11; i++)
    {
        int aux;
        aux = (verificado % 10) * i;
        soma += aux;
        verificado /= 10;
    }

    soma %= 11;
    soma = 11 - soma;
    if (soma > 9) soma = 0;

    verificado = cpf/10;
    verificado %= 10;
    if(((cpf%10) == soma) && (verificado == aux1)) printf("valido\n");
    else printf("invalido\n");

    return 0;
}