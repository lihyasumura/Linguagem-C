#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int c = 1, N, Par = 0, Impar = 0;
int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERC�CIO 49                     \n");
    printf ("Fa�a um programa que leia 6 n�meros inteiros e no final\n");
    printf (" mostre quantos deles s�o pares e quantos s�o �mpares\n");
    printf ("=======================================================\n");
    printf("\n");
    while (c < 7) {
        printf ("Digite o %do. valor: ", c);
        scanf ("%d", &N);
        if (N % 2 == 0) {
            Par = Par + 1;
        } else {
            Impar = Impar + 1;
        }
        c++;
    }
    printf ("\nN�MEROS PARES: %d\n", Par);
    printf ("N�MEROS �MPARES: %d\n", Impar);
    return 0;
}
