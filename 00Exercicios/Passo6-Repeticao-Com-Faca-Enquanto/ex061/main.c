#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int c, i;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 61                     \n");
    printf ("Crie um programa que mostre na tela a seguinte contagem, \n");
    printf ("        usando a estrutura \"faça enquanto\"\n");
    printf ("0   3   6   9   12   15   18   21   24   27   30   ACABOU!\n");
    printf ("=======================================================\n");
    printf ("\n");
    do {
        printf ("[ %3d ]", c);
        c = c + 3;
        i++;
        if ((i % 5 == 0) && (i != 0)) {
            printf ("\n");
        }
    } while (c < 31);
    printf (" -- ACABOU! -- \n");
    return 0;
}
