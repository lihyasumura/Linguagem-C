#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int V[8], c;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERC�CIO 71                     \n");
    printf (" Preencher automaticamente um vetor num�rico com 8 posi��es\n");
    printf ("=======================================================\n");
    printf("\n");
    for (c = 0; c < 8; c++) {
        V[c] = 999;
    }
    for (c = 0; c < 8; c++) {
        printf ("�NDICE %d: [ %2d ]\n", c, V[c]);
    }
    printf ("\n");
    return 0;
}
