#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int N, Soma;

int main()
{
    setlocale(LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERC�CIO 56                     \n");
    printf ("Crie um programa que leia v�rios n�meros pelo teclado\n");
    printf ("     e mostre no final o somat�rio entre eles\n");
    printf ("O programa ser� interrompido quando 1111 for digitado\n");
    printf ("=======================================================\n");
    printf("\n");
    while (N != 1111) {
        printf ("Digite um n�mero: ");
        scanf ("%d", &N);
        if (N != 1111) {
            Soma = Soma + N;
        }
        if (N == 1111) {
            printf ("\nA soma dos n�meros digitados � de [ %d ]\n", Soma);
        }
    }
    return 0;
}
