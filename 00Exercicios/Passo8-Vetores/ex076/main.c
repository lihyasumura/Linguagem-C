#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int V[], c = 0;
int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 76                     \n");
    printf (" Preencher automaticamente um vetor numérico com 7 posições\n");
    printf ("   com valores aleatoriamente gerados pelo computador\n");
    printf ("=======================================================\n");
    printf("\n");
    for (c = 0; c < 7; c++) {
        V[c] = rand() % 100;
    }
    for (c = 0; c < 7; c++) {
        printf ("ÍNDICE %2d: [ %3d ]\n", c, V[c]);
    }
    return 0;
}
