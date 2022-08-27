#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int n1, n2, soma;

int main()
{
    setlocale(LC_ALL, "");

    printf ("=================================================\n");
    printf ("               EXERCÍCIO 04                      \n");
    printf ("  Ler dois números inteiros e mostrar a soma     \n");
    printf ("            entre os dois valores                \n");
    printf ("=================================================\n");
    printf ("\n");
    printf("Digite um número: ");
    scanf ("%d", &n1);
    printf ("Digite outro número: ");
    scanf ("%d", &n2);
    soma = n1 + n2;
    printf ("\n");
    printf ("A soma entre %d e %d é: %d", n1, n2, soma);
    printf ("\n");

    return 0;
}
