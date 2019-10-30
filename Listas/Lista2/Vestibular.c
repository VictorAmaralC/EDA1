#include <stdio.h>
#include <string.h>

int main(){

  int N, i=0, igualdade=0;

  scanf("%d", &N);

  char A[N+1], B[N+1];

  scanf("%s", A);
  scanf("%s", B);

  for(i=0; i<N; i++){
    igualdade+= A[i]==B[i];
  }

  printf("%d\n", igualdade);

  return 0;
}
