#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int n1, n2, soma;

int main()
{
    setlocale(LC_ALL, "");

    printf ("=================================================\n");
    printf ("               EXERC�CIO 04                      \n");
    printf ("  Ler dois n�meros inteiros e mostrar a soma     \n");
    printf ("            entre os dois valores                \n");
    printf ("=================================================\n");
    printf ("\n");
    printf("Digite um n�mero: ");
    scanf ("%d", &n1);
    printf ("Digite outro n�mero: ");
    scanf ("%d", &n2);
    soma = n1 + n2;
    printf ("\n");
    printf ("A soma entre %d e %d �: %d", n1, n2, soma);
    printf ("\n");

    return 0;
}
