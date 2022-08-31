#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int c, i = 100;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 65                     \n");
    printf ("        Mostrar na tela a seguinte contagem:\n");
    printf ("          100  90  80  70  ...  0  ACABOU! \n");
    printf ("=======================================================\n");
    printf("\n");
    for (c = 10; c >= 0; c--) {
        if (c % 5 == 0) {
            printf ("\n");
        }
        printf ("[ %3d ]", i);
        i = i - 10;
    }
    printf ("       -- ACABOU! -- ");
    printf ("\n");
    return 0;
}
