#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int c = 1, N[20], Acima5, Div3;
int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 50                     \n");
    printf ("Desenvolva um programa que faça o sorteio de 20 números\n");
    printf (" entre 0 e 10 e mostre na tela quais foram os números\n");
    printf ("  sorteados, quantos estão acima de 5 e quantos são\n");
    printf ("                     divisíveis por 3\n");
    printf ("=======================================================\n");
    printf("\n");
    while (c < 21) {
        N[c] = (1 + (rand() % 10));
        printf ("[ %3d ]", N[c]);
        if (c % 5 == 0) {
            printf ("\n");
        }
        if (N[c] > 5) {
            Acima5 = Acima5 + 1;
        }
        if (N[c] % 3 == 0) {
            Div3 = Div3 + 1;
        }
        c++;
    }
    printf ("\nQUANTIDADE DE NÚMEROS ACIMA DE 5: %d\n", Acima5);
    printf ("QUANTIDADE DE NÚMEROS DIVISÍVEIS POR 3: %d\n", Div3);
    return 0;
}
