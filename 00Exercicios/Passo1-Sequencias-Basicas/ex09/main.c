#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float R, D;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=================================================\n");
    printf ("               EXERCÍCIO 09                       \n");
    printf (" Ler quanto dinheiro uma pessoa tem na carteira   \n");
    printf (" em R$ e mostrar quantos dólares ela pode comprar \n");
    printf ("=================================================\n");
    printf("\n");
    printf ("Quantos R$ você tem? R$");
    scanf ("%f", &R);
    printf ("\n");
    D = R / 5.14;
    printf ("Com R$%6.2f você pode comprar US$%6.2f\n", R, D);
    return 0;
}
