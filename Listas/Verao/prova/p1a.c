#include <stdio.h>
#include <stdlib.h>

int main()
{
    int disciplinas, nDisciplinas, ano, semestre;

    scanf("%d", &disciplinas);

    while (scanf("%d %d %d", &ano, &semestre, &nDisciplinas) != EOF) {
        int i, aprovados, matriculados, materia, maiorReprov = 0;
        int *reprovados = calloc(disciplinas, disciplinas*sizeof(int));

        for (i = 0; i < nDisciplinas; i++) {
            scanf("%d %d %d", &materia, &matriculados, &aprovados);
            reprovados[materia] = matriculados - aprovados;
            if (reprovados[materia] > maiorReprov) maiorReprov = reprovados[materia];
        }
        
        printf("%d/%d\n", ano, semestre);
        for (i = 0; i <= disciplinas; i++){
            if(reprovados[i] == maiorReprov)
                printf("%d ", i);
        }
        printf("\n\n");
    }

    return 0;
}