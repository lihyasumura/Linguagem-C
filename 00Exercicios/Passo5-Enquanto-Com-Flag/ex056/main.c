#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int N, Soma;

int main()
{
    setlocale(LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 56                     \n");
    printf ("Crie um programa que leia vários números pelo teclado\n");
    printf ("     e mostre no final o somatório entre eles\n");
    printf ("O programa será interrompido quando 1111 for digitado\n");
    printf ("=======================================================\n");
    printf("\n");
    while (N != 1111) {
        printf ("Digite um número: ");
        scanf ("%d", &N);
        if (N != 1111) {
            Soma = Soma + N;
        }
        if (N == 1111) {
            printf ("\nA soma dos números digitados é de [ %d ]\n", Soma);
        }
    }
    return 0;
}
