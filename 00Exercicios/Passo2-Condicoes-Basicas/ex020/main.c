#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int N;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("                EXERC�CIO 20                          \n");
    printf ("  Ler um n�mero inteiro e mostrar se � PAR ou �MPAR\n");
    printf ("=======================================================\n");
    printf ("\n");
    printf("Digite um n�mero: ");
    scanf ("%d", &N);
    printf ("\n");
    if (N % 2 == 0) {
        printf ("O n�mero %d � PAR\n", N);
    }
    if (N % 2 != 0) {
        printf ("O n�mero %d � �MPAR", N);
    }
    printf ("\n");
    return 0;
}
