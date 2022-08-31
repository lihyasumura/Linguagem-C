#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i = 6, f = 100, p = 2, c, soma;
int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 46                     \n");
    printf ("Crie um programa que calcule e mostre na tela o resultado\n");
    printf ("  da soma entre 6 + 8 + 10 + 12 + 14 + ... + 98 + 100.\n");
    printf ("=======================================================\n");
    printf("\n");
    while (i <= f) {
        if ((c % 5 == 0) && (c != 0)) {
            printf ("\n");
        }
        if (i < f) {
            printf ("[ %3d ] + ", i);
        }
        if (i == f) {
            printf ("[ %3d ]", i);
        }
        c++;
        soma = soma + i;
        i = i + p;
    }
    printf ("\n\nRESULTADO: [ %3d ]\n", soma);
    return 0;
}
