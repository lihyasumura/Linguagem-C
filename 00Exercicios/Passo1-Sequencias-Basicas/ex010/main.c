#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float L, A, Area, Tinta;
int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("                EXERCÍCIO 10                         \n");
    printf ("    Ler a largura e a altura de uma parede e calcular\n");
    printf (" a área a ser pintada e a quantidade de tinta necessária\n");
    printf ("=======================================================\n");
    // cada litro de tinta pinta uma área de 2metros quadrados
    printf ("\n");
    printf("LARGURA? ");
    scanf ("%f", &L);
    printf ("ALTURA? ");
    scanf ("%f", &A);
    Area = L * A;
    Tinta = Area / 2;
    printf ("\n");
    printf ("ÁREA A SER PINTADA: %5.2f\n", Area);
    printf ("TINTA NECESSÁRIA: %5.2f\n", Tinta);
    printf ("\n");

    return 0;
}
