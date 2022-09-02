#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int N[19]; c = 0, Aux = 0, i = 1;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 83 - DESAFIO                     \n");
    printf (" Crie uma lógica que preencha um vetor de 20 posições com\n");
    printf ("   números aleatórios (entre 0 e 99) gerados pelo\n");
    printf (" computador. Logo em seguida, mostre os números gerados\n");
    printf ("      e depois coloque o vetor em ordem crescente,\n");
    printf ("        mostrando no final os valores ordenados.\n");
    printf ("=======================================================\n");
    for (c = 0; c < 20; c++) {
        N[c] = rand() % 99;
        if (c % 5 == 0) {
            printf ("\n");
        }
        printf ("[ %2d ]", N[c]);
    }
    printf ("\n\nORDENDO O VETOR EM ORDEM CRESCENTE...\n");
    for (c = 0; c < 19; c++) {
        for (i = c + 1; i < 20; i++) {
            if ((i != 0) && (N[c] > N[i])) {
                Aux = N[i];
                N[i] = N[c];
                N[c] = Aux;
            }
        }
    }
    for (c = 0; c < 20; c++) {
        if (c % 5 == 0) {
            printf ("\n");
        }
        printf ("[ %2d ]", N[c]);
    }
    printf ("\n");
    return 0;
}
