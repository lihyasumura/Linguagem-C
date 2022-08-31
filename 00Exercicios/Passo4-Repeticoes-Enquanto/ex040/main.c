#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i = 0, f = 18;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("             EXERCÍCIO 40                     \n");
    printf ("  Mostrar na tela a seguinte contagem: \n");
    printf ("    0  3  6  9  12  15  18  ACABOU!\n");
    printf ("=======================================================\n");
    printf("\n");
    while (i <= f) {
        if (i % 3 == 0) {
            printf ("[ %d ]", i);
        }
        i++;
    }
    printf (" -- ACABOU! -- \n");
    return 0;
}
