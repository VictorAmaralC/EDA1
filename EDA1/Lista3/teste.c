#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *concat(char *x, char *y){
  char *diversao = malloc((strlen(x)+strlen(y))*sizeof(char));
  int k=0;

  for(int i = strlen(x), j = 0; x[j] != '\0'; j++, k++){
    diversao[k] = x[j];
  }
  for(int i = strlen(y), j = 0; y[j] != '\0'; j++, k++){
    diversao[k] = y[j];
  }

  return diversao;
}

int main() {
  char *s1, *s2;

  s1 = "Eu deveria aparecer depois ";
  s2 = "Eu deveria aparecer primeiro";

  s1 = concat(s1, s2);
  printf("s1 is %s\n", s1);

return 0;
}
