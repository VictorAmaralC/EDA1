#include <stdio.h>
#include <stdlib.h>

// int fibonacci (int n){
//     if (n == 1 || n == 2) return 1;
//     else {
//         int ant1, ant2, atual;
//         ant1 = ant2 = 1;
//         printf("1 1");

//         for (int i = 0; i < n; i++) {
//             atual = ant1 + ant2;
//             ant1 = ant2;
//             ant2 = atual;
//             printf(" %d", atual);
//         }
//         return atual;
//     }
// }

void fibonacci (int *fib, int n) {
    if (n == 1) {
        fib[0] = 1;
    }
    else if (n == 2) {
        fib[0] = fib[1] = 1;
    }
    else {
        fibonacci(fib, n-1);
        fib[n-1] = fib[n-2] + fib[n-3];
        printf("%d ", fib[n-1]);
    }
}

int main(){
    int n;
    scanf("%d", &n);

    int *fib = malloc(n*sizeof(int));
    if (fib == NULL) return EXIT_FAILURE;

    printf("Fibonacci (%d) = 1 1 ", n);
    fibonacci(fib, n);
    printf("\n");
    free(fib);
    
    return 0;
}