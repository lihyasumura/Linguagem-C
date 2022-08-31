#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int c, i;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 64                     \n");
    printf ("Desenvolva um programa usando a estrutura \"PARA\" que\n");
    printf ("  mostre na tela a contagem de 0 5 10 ... 40  ACABOU!\n");
    printf ("=======================================================\n");
    printf("\n");
    for (c = 0; c < 9; c++) {
        if ((c % 5 == 0) && (c != 0)) {
            printf ("\n");
        }
        printf ("[ %3d ]", i);
        i = i + 5;
    }
    printf ("\n         -- ACABOU! --");
    printf ("\n");
    return 0;
}
