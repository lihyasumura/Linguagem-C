#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char Nome[8][15];
int c = 0, Idade[8];

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 84                     \n");
    printf (" Crie um programa que leia o nome e a idade de 9 pessoas\n");
    printf ("  e guerde esses valores em dois vetores, em posições\n");
    printf (" relacionadas. No final, mostre uma listagem contendo\n");
    printf ("     apenas os dados das pessoas menores de idade.\n");
    printf ("=======================================================\n");
    printf("\n");
    for (c = 0; c < 9; c++) {
        printf ("NOME: ");
        scanf ("%s", Nome[c]);
        printf ("IDADE: ");
        scanf ("%d", &Idade[c]);
        printf ("\n");
    }
    printf (" -- MENORES DE 18 ANOS:\n\n");
    for (c = 0; c < 9; c++) {
        if (Idade[c] < 18) {
            printf ("NOME: %s\n", Nome[c]);
            printf ("IDADE: %d anos\n", Idade[c]);
            printf ("\n");
        }
    }
    return 0;
}
