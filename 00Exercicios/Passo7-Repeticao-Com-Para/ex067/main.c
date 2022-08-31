#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int N, c;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 67                     \n");
    printf (" Ler um número inteiro e positivo e mostrar na tela\n");
    printf ("uma contagem até o valor digitado com a estrutura PARA\n");
    printf ("=======================================================\n");
    printf("\n");
    printf ("Digite um número: ");
    scanf ("%d", &N);
    printf ("\n");
    for (c = 0; c < N + 1; c++) {
        if ((c % 5 == 0) && (c != 0)) {
            printf ("\n");
        }
        printf ("[ %3d ]", c);
    }
    printf (" \n\n-- ACABOU! -- \n");
    return 0;
}
