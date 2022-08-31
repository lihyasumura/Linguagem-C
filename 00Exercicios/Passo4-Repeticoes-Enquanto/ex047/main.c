#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i = 500, f = 50, p = 50, c, soma;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 47                     \n");
    printf (" Desenvolva um aplicativo que mostre na tela o resultado\n");
    printf (" da expressão 500 + 450 + 400 + 350 + 300 + ... + 50 + 0\n");
    printf ("=======================================================\n");
    printf("\n");
    while (i > f) {
        if ((c % 5 == 0) && (c != 0)) {
            printf ("\n");
        }
        c++;
        printf ("[ %3d ] + ", i);
        soma = soma + i;
        i = i - p;
        if (i == f) {
            soma = soma + i;
            printf ("[ %3d ]", i);
        }
    }
    printf ("\n\nRESULTADO: [ %3d ]\n", soma);
    return 0;
}
