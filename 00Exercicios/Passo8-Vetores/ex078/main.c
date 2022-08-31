#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Numeros[], c = 0;
int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 78                     \n");
    printf ("     Ler 15 números e guardá-los em um vetor\n");
    printf ("No final, mostre o vetor inteiro e em seguida mostre\n");
    printf ("      em que posições foram digitados valores\n");
    printf ("             que são múltiplos de 10\n");
    printf ("=======================================================\n");
    printf("\n");
    for (c = 0; c < 15; c++) {
        printf ("%2do. número: ", c + 1);
        scanf ("%d", &Numeros[c]);
    }
    printf ("\n");
    printf (" -- NÚMEROS DIGITADOS: -- \n");
    for (c = 0; c < 15; c++) {
        if ((c % 5 == 0) && (c != 0)) {
            printf ("\n");
        }
        printf ("[ %2d ]", Numeros[c]);
    }
    printf ("\n");
    printf ("\n -- MÚLTIPLOS DE 10: -- \n");
    for (c = 0; c < 15; c++) {
        if (Numeros[c] % 10 == 0) {
            printf ("ÍNDICE %2d - Número %2d\n", c, Numeros[c]);
        }
    }
    return 0;
}
