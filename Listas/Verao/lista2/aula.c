#include <stdio.h>

int maior(int *v, int n)
{
    if (n == 1)
        return v[0];
    else
    {
        int elem = maior(v, n - 1);
        printf("maior(v,%d) = %d\n", n-1, elem);
        if (v[n - 1] > elem)
            return v[n - 1];
        else
            return elem;
    }
}

int main()
{
    int a = 4, b[4] = {5,8,3,1};
    
    maior(b, a);

    return 0;
}