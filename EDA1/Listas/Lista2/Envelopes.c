#include <stdio.h>

int main(){
  int N, K, i;

  scanf("%d %d", &N, &K);

  int X[K], s, envelopes;

  for(i=1; i<=K; i++){
    X[i]=0;
  }

  for(i=0; i<N; i++){
    scanf("%d", &s);
    X[s]++;
  }

  envelopes = X[1];

  if(K > 1){
    for(i=1; i <= K; i++){
      if(X[i] < envelopes) envelopes = X[i];
    }
  }

  printf("%d\n", envelopes);

  return 0;
}
