#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Ano;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("                EXERC�CIO 21                          \n");
    printf (" Ler um determinado ano e mostrar se � bissexto ou n�o\n");
    printf ("=======================================================\n");
    printf ("\n");
    printf("ANO: ");
    scanf ("%d", &Ano);
    printf ("\n");

    if (Ano % 4 == 0) {
        printf ("%d � um ano BISSEXTO\n", Ano);
    }
    if (Ano % 4 != 0) {
        printf ("%d N�O � um ano bissexto\n", Ano);
    }
    return 0;
}
