#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i = 30, f = 1;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("             EXERCÍCIO 43                     \n");
    printf ("  Mostrar uma contagem regressiva de 30 até 1, marcando \n");
    printf ("          os números que forem divisíveis por 4\n");
    printf ("=======================================================\n");
    printf ("\n");
    while (i >= f) {
        if ((i % 5 == 0) && (i != 30)) {
            printf ("\n");
            printf ("****************************************\n");
        }
        if (i % 4 == 0) {
            printf (" [ %d ] ", i);
        } else {
            printf ("   %d   ", i);
        }
        i--;
    }
    printf ("\n****************************************\n");
    printf ("\n");
    return 0;
}
