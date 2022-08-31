#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int V[8], c;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 71                     \n");
    printf (" Preencher automaticamente um vetor numérico com 8 posições\n");
    printf ("=======================================================\n");
    printf("\n");
    for (c = 0; c < 8; c++) {
        V[c] = 999;
    }
    for (c = 0; c < 8; c++) {
        printf ("ÍNDICE %d: [ %2d ]\n", c, V[c]);
    }
    printf ("\n");
    return 0;
}
