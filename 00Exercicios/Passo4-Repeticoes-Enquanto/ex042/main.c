#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i = 0, N;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("             EXERCÍCIO 42                     \n");
    printf (" Perguntar ao usuário um número inteiro e positivo\n");
    printf ("qualquer e mostrar uma contagem até o valor digitado\n");
    printf ("=======================================================\n");
    printf("\n");
    printf ("Digite um número: ");
    scanf ("%d", &N);
    printf ("\n");
    while (i <= N) {
        if (i % 5 == 0 + 1) {
            printf ("\n");
        }
        printf ("[ %3d ]", i);
        i++;
    }
    printf ("\n\n[ -- ACABOU! -- ]\n");
    return 0;
}
