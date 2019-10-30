#include <stdio.h>

int main(){
  int N, M, P, A, B, PAx=1, PAy=1, PBx, PBy, i=1, memoria=0, out, xout, yout;

  scanf("%d %d", &N, &M);
  scanf("%d", &P);

  PBx = N;
  PBy = M;

  while(i <= P){
    scanf("%d %d", &A, &B);

    switch (A) {
      case 1:
        PAy++;
        break;
      case 2:
        PAy--;
        break;
      case 3:
        PAx++;
        break;
      case 4:
        PAx--;
        break;
    }
    switch (B) {
      case 1:
        PBy++;
        break;
      case 2:
        PBy--;
        break;
      case 3:
        PBx++;
        break;
      case 4:
        PBx--;
        break;
    }

    if(PAx < 1 || PAx > N || PAy < 1 || PAy > M){
      if(memoria==0){
        memoria=1;
        out = i;
        xout = PAx;
        yout = PAy;
      }
    }
    else if(PBx < 1 || PBx > N || PBy < 1 || PBy > M){
      if(memoria==0){
        memoria=2;
        out = i;
        xout = PBx;
        yout = PBy;
      }
    }
    else if(PAx == PBx && PAy == PBy){
      if(memoria==0){
        memoria=3;
        out = i;
        xout = PAx;
        yout = PAy;
      }
    }

    i++;
  }

  switch (memoria) {
    case 1:
      printf("PA saiu na posicao (%d,%d) no passo %d\n", xout, yout, out);
      break;
    case 2:
      printf("PB saiu na posicao (%d,%d) no passo %d\n", xout, yout, out);
      break;
    case 3:
      printf("Encontraram-se na posicao (%d,%d) no passo %d\n", xout, yout, out);
      break;
    case 0:
      printf("Nao se encontraram\n");
      break;
  }

  return 0;
}
