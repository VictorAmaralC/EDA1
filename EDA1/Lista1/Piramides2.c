#include <stdio.h>

int main(){
  int n, j, k, m=0, l=0, i=0;

  scanf("%d", &n);
  j=n;
  k = n-1;

  while(j > 0){
    while(i < k){
      printf(" ");
      i++;
    }
    while(i < n){
      printf("*");
      i++;
    }
    while(m != l){
      printf("*");
      m++;
    }
    l++;
    m=0;
    printf("\n");
    i=0;
    k--;
    j--;
  }



  return 0;
}
