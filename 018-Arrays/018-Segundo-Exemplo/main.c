#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[4];
    int i;

    // LENDO AS NOTAS DO ALUNO //

    for (i = 0; i < 4; i++) {
        printf ("Entre com a %da. nota do aluno: ", i + 1);
        scanf ("%f", &notas[i]);
    }

    // MOSTRANDO NA TELA AS NOTAS //
    printf ("\n");
    for (i = 0; i < 4; i++) {
        printf ("Nota %d = %4.2f\n", i + 1, notas[i]);
    }
    return 0;
}
