#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int N1, N2, N3;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("             EXERC�CIO 30                     \n");
    printf (" Refazer o exerc�cio 25 acrescentando o recurso de mostrar\n");
    printf ("           e � equilatero, is�sceles ou escaleno\n");
    // EQUIL�TERO = TODOS OS LADOS IGUAIS;
    // IS�SCELES = DOIS LADOS IGUAIS;
    // ESCALENO = TODOS OS LADOS DIFERENTES;
    printf ("=======================================================\n");
    printf("\n");
    printf (" -- DIGITE OS TAMANHOS --\n");
    printf ("\n");
    printf ("1� lado: ");
    scanf ("%d", &N1);
    printf ("2� lado: ");
    scanf ("%d", &N2);
    printf ("3� lado: ");
    scanf ("%d", &N3);
    printf ("\n");
    printf ("Com as medidas acima temos um tri�ngulo: ");
    if (N1 != N2 && N1 != N3 && N2 != N3) {
        printf ("ESCALENO\n");
    } else if (N1 == N2 && N1 == N3) {
        printf ("EQUIL�TERO\n");
    } else if (N1 == N2 || N1 == N3 || N2 == N3) {
        printf ("IS�SCELES\n");
    }
    return 0;
}
