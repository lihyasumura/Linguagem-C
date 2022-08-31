#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int V[], c = 0, F = 1, F1 = 0, F2 = 0;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 75                     \n");
    printf ("  Preencher um vetor com os 15 primeiros elementos\n");
    printf ("              da sequência FIBONACCI\n");
    printf ("=======================================================\n");
    printf("\n");
    for (c = 0; c < 15; c++) {
        F2 = F + F1;
        F = F1;
        F1 = F2;
        V[c] = F2;

    }
    for (c = 0; c < 15; c++) {
        printf ("ÍNCIDE %2d: [ %3d ]\n", c, V[c]);
    }
    return 0;
}
