#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int N[], c = 0;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERC�CIO 79                     \n");
    printf ("   Ler 10 n�meros inteiros e guard�-los em um vetor\n");
    printf ("No final, mostre quais s�o os n�meros pares que foram\n");
    printf ("  digitados e em que posi��es eles est�o armazenados\n");
    printf ("=======================================================\n");
    printf("\n");
    for (c = 0; c < 10; c++) {
        printf ("%do. n�mero: ", c + 1);
        scanf ("%d", &N[c]);
    }
    printf ("\n");
    printf (" -- N�MEROS PARES: -- \n\n");
    for (c = 0; c < 10; c++) {
        if (N[c] % 2 == 0) {
            printf ("�NDICE %d - N�MERO %2d\n", c, N[c]);
        }
    }
    printf ("\n");
    return 0;
}
