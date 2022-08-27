#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float P, PM;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("                EXERCÍCIO 12                          \n");
    printf ("     Ler o preço de um produto e calcular o seu       \n");
    printf ("       preço promocional com 5\% de desconto            \n");
    printf ("=======================================================\n");
    printf ("\n");
    printf("Qual o preço do produto? R$");
    scanf ("%f", &P);
    PM = P - ((P * 5) / 100);
    printf ("\n");
    printf ("O preço promocional é de R$%6.2f", PM);
    printf ("\n");
    return 0;
}
