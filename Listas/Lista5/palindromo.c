#include <stdio.h>
#include <string.h>

int compara(int n, char palavra[n]){
  int i = 1, j=n;
  for(i, j; i < n; i++, j--){
    if(palavra[i]!=palavra[j])
      return 0;
  }
  return 1;
}

int main(){
  int n, i=1;
  scanf("%i\n", &n);

  char palavra[n+2];

  for(i; i <= n; i++){
    scanf("%c", &palavra[i]);
  }
  n = compara(n, palavra);
  printf("%d\n", n);

  return 0;
}