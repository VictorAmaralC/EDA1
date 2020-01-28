#include <stdio.h>
#include <string.h>

int nove(char *n, int soma, int movimentos)
{
    if (strcmp(n, "9") == 0)
        return movimentos;

    for (int i = 0; n[i] != '\0'; i++)
    {
        soma += n[i] - '0';
    }
    sprintf(n, "%d", soma);

    if (soma >= 9)
        return movimentos = nove(n, 0, movimentos + 1);
    else if (soma < 9)
        return 0;
}

int main()
{

    int n, j;
    char abba[1001], aux[1001];

    while (scanf("%s", abba), strcmp(abba, "0") != 0)
    {
        int k = 0;
        strcpy(aux, abba);

        if (strcmp(abba, "9") == 0)
        {
            printf("%s is a multiple of 9 and has 9-degree %d.\n", aux, 1);
            continue;
        }

        k = nove(abba, 0, k);

        if (k != 0)
        {
            printf("%s is a multiple of 9 and has 9-degree %d.\n", aux, k);
        }
        else
            printf("%s is not a multiple of 9.\n", aux);
    }

    return 0;
}