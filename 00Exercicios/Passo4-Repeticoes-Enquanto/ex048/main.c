#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int c = 1, N, soma;
int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 48                     \n");
    printf ("Faça um program que leia 7 números inteiros e no final\n");
    printf ("            mostre a somatória entre eles\n");
    printf ("=======================================================\n");
    printf("\n");
    while (c < 8) {
        printf ("Digite o %do. valor: ", c);
        scanf ("%d", &N);
        soma = soma + N;
        c++;
    }
    printf ("\n\nA soma de todos os números é %d\n", soma);
    return 0;
}
