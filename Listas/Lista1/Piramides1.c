#include <stdio.h>

int main(){
  int n, k, j = 2, i = 1;

  scanf("%d", &n);

  n+=2;
  k = i;

  while(j != n){
    while(i < j){
      if(i == j-1){
        if(k < 10){
          printf("0%d", k);
        }
        else {
          printf("%d", k);
        }
      }
      else{
        if(k < 10){
          printf("0%d ", k);
        }
        else {
          printf("%d ", k);
        }
      }
      i++;
    }

    i=1;
    k++;

    printf("\n");
    j++;
  }

  printf("\n");
  j=2;
  i=1;

  while(j != n){
    while(i < j){
      if(i == j-1){
        if(i < 10){
          printf("0%d", i);
        }
        else {
          printf("%d", i);
        }
      }
      else{
        if(i < 10){
          printf("0%d ", i);
        }
        else {
          printf("%d ", i);
        }
      }
      i++;
    }
    i = 1;
    printf("\n");
    j++;
  }

  return 0;
}
