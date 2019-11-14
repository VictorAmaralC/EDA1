#include <stdio.h>
#include <stdlib.h>

typedef struct tempNo
{
    int valor;
    int coluna;
    struct tempNo *prox;
} NO;

typedef NO *PONT;

typedef struct
{
    PONT *A;
    int linhas;
    int colunas;
} MATRIZ;

void atribuiValor(MATRIZ *m, int lin, int col, int val)
{
    PONT novo = (PONT)malloc(sizeof(NO));
    novo->coluna = col;
    novo->valor = val;
    novo->prox = m->A[lin];
    m->A[lin] = novo;
}

int main()
{
    MATRIZ mat;
    int n, m;
    scanf("%d %d", &m, &n);
    int v[n];
    int w[1000000] = {};

    mat.linhas = n;
    mat.colunas = m;
    mat.A = (PONT *)malloc(n * sizeof(PONT));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
        mat.A[i] = NULL;
    }

    int lin, col, val, nnz = 0;
    while (scanf("%d %d %d", &lin, &col, &val) != EOF)
    {
        atribuiValor(&mat, lin, col, val);
        nnz++;
    }

    int i = 0;
    while (nnz > 0)
    {

        PONT atual = mat.A[i];
        while (atual != NULL && atual->coluna >= 0)
        {
            w[i] += v[atual->coluna] * atual->valor;
            atual = atual->prox;
            nnz--;
        }
        i++;
    }

    for (int i = 0; i < m; i++)
        printf("%d\n", w[i]);
}