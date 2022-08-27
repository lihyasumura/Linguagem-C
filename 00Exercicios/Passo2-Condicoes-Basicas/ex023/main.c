#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char nome[], sexo[];
float preco, Desconto;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("                EXERCÍCIO 23                          \n");
    printf ("  Ler o nome, sexo e o valor das compras do cliente e \n");
    printf ("o preço com desconto. 5 para homens, 13 para mulheres \n");
    printf ("=======================================================\n");
    printf ("\n");
    printf ("Qual o seu nome? ");
    scanf ("%s", &nome);
    printf ("SEXO [M/F]: ");
    scanf ("%s", &sexo);
    sexo[0] = toupper(sexo[0]);
    printf("Digite o valor de sua compra: R$");
    scanf ("%f", &preco);
    printf ("\n");

    if (sexo[0] == 'M') {
        Desconto = preco - ((preco * 5) / 100);
        printf ("PARABÉNS, GRANDE HOMEM!\n");
        printf ("VALOR PROMOCIONAL: %6.2f\n", Desconto);
    }
    if (sexo[0] == 'F') {
        Desconto = preco - ((preco * 13) / 100);
        printf ("PARABÉNS, GRANDE GUERREIRA!\n");
        printf ("VALOR PROMOCIONAL: %6.2f\n", Desconto);
    }

    return 0;
}
