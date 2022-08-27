#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int N;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("                EXERCÍCIO 20                          \n");
    printf ("  Ler um número inteiro e mostrar se é PAR ou ÍMPAR\n");
    printf ("=======================================================\n");
    printf ("\n");
    printf("Digite um número: ");
    scanf ("%d", &N);
    printf ("\n");
    if (N % 2 == 0) {
        printf ("O número %d é PAR\n", N);
    }
    if (N % 2 != 0) {
        printf ("O número %d é ÍMPAR", N);
    }
    printf ("\n");
    return 0;
}
