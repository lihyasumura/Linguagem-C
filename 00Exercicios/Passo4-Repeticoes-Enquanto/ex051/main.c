#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int c = 1;
float preco, maior = 0, menor = 0;
int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERC�CIO 51                     \n");
    printf ("  Fa�a um aplicativo que leia o pre�o de 8 produtos\n");
    printf ("  No final, mostre na tela o maior e o menor pre�o\n");
    printf ("=======================================================\n");
    printf("\n");
    while (c < 9) {
        printf ("Digite o %do. valor: R$", c);
        scanf ("%f", &preco);
        if (preco > maior) {
            maior = preco;
        } else if ((preco < menor) || (menor == 0)) {
            menor = preco;
        }
        c++;
    }
    printf ("\nMAIOR PRE�O INSERIDO: R$%6.2f", maior);
    printf ("\nMENOR PRE�O INSERIDO: R$%6.2f\n", menor);
    return 0;
}
