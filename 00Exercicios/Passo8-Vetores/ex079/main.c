#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int N[], c = 0;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 79                     \n");
    printf ("   Ler 10 números inteiros e guardá-los em um vetor\n");
    printf ("No final, mostre quais são os números pares que foram\n");
    printf ("  digitados e em que posições eles estão armazenados\n");
    printf ("=======================================================\n");
    printf("\n");
    for (c = 0; c < 10; c++) {
        printf ("%do. número: ", c + 1);
        scanf ("%d", &N[c]);
    }
    printf ("\n");
    printf (" -- NÚMEROS PARES: -- \n\n");
    for (c = 0; c < 10; c++) {
        if (N[c] % 2 == 0) {
            printf ("ÍNDICE %d - NÚMERO %2d\n", c, N[c]);
        }
    }
    printf ("\n");
    return 0;
}
