#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int c = 1, Idade, Maior18, Menor5, Maior, Soma;
float Media;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 52                     \n");
    printf ("Crie um algoritmo que leia a idade de 10 pessoas e mostre: \n");
    printf (" a) Qual é a média de idade do grupo;\n");
    printf (" b) Quantas pessoas tem mais de 18 anos;\n");
    printf (" c) Quantas pessoas tem menos de 5 anos;\n");
    printf (" d) Qual foi a maior idade lida.\n");
    printf ("=======================================================\n");
    printf("\n");
    while (c < 11) {
        printf ("%da. IDADE: ", c);
        scanf ("%d", &Idade);
        Soma = Soma + Idade;
        Media = Soma / 10.0;
        if (Idade > 18) {
            Maior18 = Maior18 + 1;
        }
        if (Idade < 5) {
            Menor5 = Menor5 + 1;
        }
        if (Idade > Maior) {
            Maior = Idade;
        }
        c++;
    }
    printf ("\nMÉDIA DE IDADE DO GRUPO: %3.1f\n", Media);
    printf ("MAIORES DE 18 ANOS: %d\n", Maior18);
    printf ("MENORES DE 5 ANOS: %d\n", Menor5);
    printf ("MAIOR IDADE: %d\n", Maior);
    return 0;
}
