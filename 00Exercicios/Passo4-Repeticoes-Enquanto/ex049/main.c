#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int c = 1, N, Par = 0, Impar = 0;
int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 49                     \n");
    printf ("Faça um programa que leia 6 números inteiros e no final\n");
    printf (" mostre quantos deles são pares e quantos são ímpares\n");
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
    printf ("\nNÚMEROS PARES: %d\n", Par);
    printf ("NÚMEROS ÍMPARES: %d\n", Impar);
    return 0;
}
