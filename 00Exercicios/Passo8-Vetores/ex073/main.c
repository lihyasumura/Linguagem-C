#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int V[], c = 1, N = 9;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 73                     \n");
    printf (" Preencher automaticamente um vetor de 10 posições\n");
    printf ("              com os valores de 9 a 0\n");
    printf ("=======================================================\n");
    printf("\n");
    for (c = 0; c < 9; c++) {
        V[c] = N;
        N--;
    }
    for (c = 0; c < 10; c++) {
        printf ("ÍNDICE %2d: [ %2d ]\n", c, V[c]);
    }
    return 0;
}
