#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i = 6, f = 11;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("             EXERCÍCIO 38                     \n");
    printf ("   Mostrar na tela a seguinte contagem:\n");
    printf ("       6  7  8  9  10  11  Acabou!\n");
    printf ("=======================================================\n");
    printf("\n");
    while (i <= f) {
        printf ("[ %d ]", i);
        i ++;
    }
    printf (" -- Acabou! -- \n");
    return 0;
}
