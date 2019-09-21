#include <stdio.h>

int main(){

  int consumo, valorConta=0;

  scanf("%d", &consumo);

  if(consumo <= 10){
    valorConta = 7;
  }
  else if(consumo <= 30 && consumo > 10){
    valorConta = 7 + (consumo - 10);
  }
  else if(consumo <= 100 && consumo > 30){
    valorConta = 27 + ((consumo - 30)*2);
  }
  else if(consumo > 100){
    valorConta = 167 + ((consumo-100)*5);
  }

  printf("%d\n", valorConta);

  return 0;
}
