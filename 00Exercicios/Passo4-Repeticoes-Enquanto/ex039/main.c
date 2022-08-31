#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i = 10, f = 3;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("             EXERCÍCIO 39                     \n");
    printf ("  Mostrar na tela a seguinte contagem:\n");
    printf ("   10  9  8  7  6  5  4  3  ACABOU!\n");
    printf ("=======================================================\n");
    printf("\n");
    while (i >= f) {
        printf ("[ %d ]", i);
        i--;
    }
    printf (" -- ACABOU! --\n");
    return 0;
}
