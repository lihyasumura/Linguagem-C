#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float P, PM;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("                EXERC�CIO 12                          \n");
    printf ("     Ler o pre�o de um produto e calcular o seu       \n");
    printf ("       pre�o promocional com 5\% de desconto            \n");
    printf ("=======================================================\n");
    printf ("\n");
    printf("Qual o pre�o do produto? R$");
    scanf ("%f", &P);
    PM = P - ((P * 5) / 100);
    printf ("\n");
    printf ("O pre�o promocional � de R$%6.2f", PM);
    printf ("\n");
    return 0;
}
