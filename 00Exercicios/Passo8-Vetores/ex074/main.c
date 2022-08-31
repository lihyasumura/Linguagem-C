#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int V[], c = 1;
int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 74                     \n");
    printf (" Preencher automaticamente um vetor numérico de 10 posições\n");
    printf ("   ÍNDICE 0 = 5, ÍNDICE 1 = 3, ÍNDICE 2 = 5, ÍNDICE 3 = 3\n");
    printf ("   ÍNDICE 4 = 5, ÍNDICE 5 = 3, ÍNDICE 6 = 5, ÍNDICE 7 = 3\n");
    printf ("                ÍNDICE 8 = 5 E ÍNDICE 9 = 3\n");
    printf ("=======================================================\n");
    printf("\n");
    for (c = 0; c < 10; c++) {
        if (c % 2 == 0) {
            V[c] = 5;
        } else {
            V[c] = 3;
        }
    }
    for (c = 0; c < 10; c++) {
        printf ("ÍNDICE %2d: [ %2d ]\n", c, V[c]);
    }
    return 0;
}
