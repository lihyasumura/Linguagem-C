#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int N1, N2, N3;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("             EXERCÍCIO 30                     \n");
    printf (" Refazer o exercício 25 acrescentando o recurso de mostrar\n");
    printf ("           e é equilatero, isósceles ou escaleno\n");
    // EQUILÁTERO = TODOS OS LADOS IGUAIS;
    // ISÓSCELES = DOIS LADOS IGUAIS;
    // ESCALENO = TODOS OS LADOS DIFERENTES;
    printf ("=======================================================\n");
    printf("\n");
    printf (" -- DIGITE OS TAMANHOS --\n");
    printf ("\n");
    printf ("1º lado: ");
    scanf ("%d", &N1);
    printf ("2º lado: ");
    scanf ("%d", &N2);
    printf ("3º lado: ");
    scanf ("%d", &N3);
    printf ("\n");
    printf ("Com as medidas acima temos um triângulo: ");
    if (N1 != N2 && N1 != N3 && N2 != N3) {
        printf ("ESCALENO\n");
    } else if (N1 == N2 && N1 == N3) {
        printf ("EQUILÁTERO\n");
    } else if (N1 == N2 || N1 == N3 || N2 == N3) {
        printf ("ISÓSCELES\n");
    }
    return 0;
}
