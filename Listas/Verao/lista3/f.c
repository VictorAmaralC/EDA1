#include <stdio.h>
#include <string.h>

void reverte(char *palavra, int tamanho) {
    if (palavra[tamanho-1] == '\0') return;
    printf("%c", palavra[tamanho-1]);
    reverte(palavra, tamanho-1);
}

int main() {
    char palavra[501];
    scanf("%s", palavra);
    reverte(palavra, strlen(palavra));
    printf("\n");
    return 0;
}