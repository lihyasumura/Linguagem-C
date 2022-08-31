#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char Nomes[6][15]; c = 1, i = 6;
int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 77                     \n");
    printf (" Ler 7 nomes de pessoas e guardar em um vetor.\n");
    printf ("No final, mostre uma listagem com todos os nomes\n");
    printf ("informados na ordem inversa daquela em que eles\n");
    printf ("             foram informados\n");
    printf ("=======================================================\n");
    printf("\n");
    for (c = 0; c < 7; c++) {
        printf ("Digite o %do. nome: ", c + 1);
        scanf ("%s", Nomes[c]);
        strupr(Nomes[c]);
    }
    printf ("\n");
    for (i = 6; i >=0; i--) {
        printf ("ÍNDICE %2d: %s\n",i, Nomes[i]);
    }
    return 0;
}
