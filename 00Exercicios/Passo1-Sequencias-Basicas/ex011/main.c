#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int A, B, C, D;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("                EXERC�CIO 11                          \n");
    printf (" Desenvolva uma l�gica que leia os valores de A, B e C \n");
    printf ("de uma equa��o do segundo grau e mostre o valor de Delta\n");
    printf ("=======================================================\n");
    // Delta = b2 � 4ac
    printf ("\n");
    printf("Digite o valor de A: ");
    scanf ("%d", &A);
    printf ("Digite o valor de B: ");
    scanf ("%d", &B);
    printf ("Digite o valor de C: ");
    scanf ("%d", &C);
    printf ("\n");
    D = pow(8,2) - (4 * A * C);
    printf ("O valor de Delta � %d", D);
    printf ("\n");

    return 0;
}
