#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Ano;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("                EXERCÍCIO 21                          \n");
    printf (" Ler um determinado ano e mostrar se é bissexto ou não\n");
    printf ("=======================================================\n");
    printf ("\n");
    printf("ANO: ");
    scanf ("%d", &Ano);
    printf ("\n");

    if (Ano % 4 == 0) {
        printf ("%d é um ano BISSEXTO\n", Ano);
    }
    if (Ano % 4 != 0) {
        printf ("%d NÃO é um ano bissexto\n", Ano);
    }
    return 0;
}
