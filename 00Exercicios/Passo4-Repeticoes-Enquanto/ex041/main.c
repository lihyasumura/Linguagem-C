#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i = 100;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("               EXERCÍCIO 41                     \n");
    printf ("   Mostrar na tela a seguinte contagem: \n");
    printf ("   100  95  90  85  80  ...  0  ACABOU!\n");
    printf ("=======================================================\n");
    printf("\n");
    while (i >= 0) {
        if (i == 79) {
            printf ("\n");
        } else if (i == 54) {
            printf ("\n");
        } else if (i == 29) {
            printf ("\n");
        }
        if ((i % 5 == 0) && (i != 0)) {
            printf ("[ %3d ]", i);
        }
        if (i == 0) {
            printf ("\n");
            printf ("[ %3d ]", i);
            printf ("        -- ACABOU! --\n");
        }
        i--;
    }
    return 0;
}
