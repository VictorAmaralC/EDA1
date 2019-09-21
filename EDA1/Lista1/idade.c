#include <stdio.h>

int main() {
  int dia, mes, ano, ndia, nmes, nano, idia=0, imes=0, iano=0;

  scanf("%d %d %d", &ndia, &nmes, &nano);
  scanf("%d %d %d", &dia, &mes, &ano);

  if(dia < 1 || dia > 31 || mes < 1 || mes > 12 || ano < 0 || ano > 9999 || ndia < 1 || ndia > 31 || nmes < 1 || nmes > 12 || nano < 0 || nano > 9999){
    printf("data invalida\n");
  }
  else{
    idia =  (dia+(mes*31)+(ano*31*12)) - (ndia+(nmes*31)+(nano*31*12));
    iano = idia / (12*31);
    idia %= 12*31;
    imes = idia / 31;
    idia %= 31;

    printf("%d\n%d\n%d\n", iano, imes, idia);
  }

  return 0;
}
