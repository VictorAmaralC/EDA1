#include <stdio.h>

unsigned long int soma(unsigned long int n, unsigned long int total)
{
    if (n == 0) return total;
    else {
        total += n%10;
        return total = soma(n/10, total);
    }
}

int main()
{
    unsigned long int n;

    scanf("%ld", &n);
    n = soma(n, 0);
    printf("%ld\n", n);

    return 0;
}