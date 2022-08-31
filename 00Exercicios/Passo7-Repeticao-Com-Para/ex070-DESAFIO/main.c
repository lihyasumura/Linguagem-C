#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int c, F = 1, Aux, Res;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 70 - DESAFIO                     \n");
    printf ("Mostrar os 10 primeiros elementos da Sequência FIBONACCI\n");
    printf ("=======================================================\n");
    for (c = 1; c < 11; c++) {
        if (c % 5 == 0 + 1) {
            printf ("\n");
        }
        Aux = F;
        F = Res;
        Res = Aux + F;
        printf ("[ %3d ]", Res);
    }
    printf ("\n");
    return 0;
}
