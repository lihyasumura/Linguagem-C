#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int PT, RZ, c, Aux, Res;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("               EXERCÍCIO 69 - DESAFIO                     \n");
    printf (" Desenvolva um programa que leia o primeiro termo e a razão\n");
    printf (" de uma PA (Progressão Aritmética), mostrando na tela os 10\n");
    printf ("primeiros elementos da PA e a soma entre todos os valores\n");
    printf ("=======================================================\n");
    printf("\n");
    printf ("PRIMEIRO VALOR DA PA: ");
    scanf ("%d", &PT);
    printf ("RAZÃO DA PA: ");
    scanf ("%d", &RZ);
    printf ("\n");
    for (c = 1; c < 11; c++) {
        if (c % 5 == 0 + 1) {
            printf ("\n");
        }
        printf ("[ %3d ]", PT);
        Aux = PT;
        Res = Aux + RZ;
        PT = Res;
    }
    printf ("\n");
    return 0;
}
