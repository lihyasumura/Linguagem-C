#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int c = 1, N, soma;
int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERC�CIO 48                     \n");
    printf ("Fa�a um program que leia 7 n�meros inteiros e no final\n");
    printf ("            mostre a somat�ria entre eles\n");
    printf ("=======================================================\n");
    printf("\n");
    while (c < 8) {
        printf ("Digite o %do. valor: ", c);
        scanf ("%d", &N);
        soma = soma + N;
        c++;
    }
    printf ("\n\nA soma de todos os n�meros � %d\n", soma);
    return 0;
}
