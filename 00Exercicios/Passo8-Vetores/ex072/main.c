#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int V[], c = 1;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERC�CIO 72                     \n");
    printf (" Preencher automaticamente (usando l�gica, n�o apenas\n");
    printf ("atribuindo diretamente) um vetor num�rico de 10 posi��es\n");
    printf ("=======================================================\n");
    printf("\n");
    for (c = 0; c < 10; c++) {
        V[c] = c * 5 + 5;
    }
    for (c = 0; c < 10; c++) {
        printf ("�NDICE %2d: [ %2d ]\n", c, V[c]);
    }
    return 0;
}
