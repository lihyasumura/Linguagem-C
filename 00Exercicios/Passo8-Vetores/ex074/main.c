#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int V[], c = 1;
int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERC�CIO 74                     \n");
    printf (" Preencher automaticamente um vetor num�rico de 10 posi��es\n");
    printf ("   �NDICE 0 = 5, �NDICE 1 = 3, �NDICE 2 = 5, �NDICE 3 = 3\n");
    printf ("   �NDICE 4 = 5, �NDICE 5 = 3, �NDICE 6 = 5, �NDICE 7 = 3\n");
    printf ("                �NDICE 8 = 5 E �NDICE 9 = 3\n");
    printf ("=======================================================\n");
    printf("\n");
    for (c = 0; c < 10; c++) {
        if (c % 2 == 0) {
            V[c] = 5;
        } else {
            V[c] = 3;
        }
    }
    for (c = 0; c < 10; c++) {
        printf ("�NDICE %2d: [ %2d ]\n", c, V[c]);
    }
    return 0;
}
