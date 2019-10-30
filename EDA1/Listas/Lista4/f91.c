#include <stdio.h>

int f91(int n){
  if(n >=101) n-=10;
  else return f91(f91(n+11));

  return n;
}

int main(){
  int n, k;

  while(scanf("%d", &n), n != 0){
  k = n;
  n = f91(n);
  printf("f91(%d) = %d\n", k, n);
  }

  return 0;
}
