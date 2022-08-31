#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int c = 1, Idade, Soma, IdadeH, Mulheres, Mulher20;
float Media, Homens, MediaH;
char Sexo[];

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 53                     \n");
    printf ("    Faça um programa que leia a idade e o sexo \n");
    printf ("        de 5 pessoas mostrando no final:\n");
    printf ("a) Quantos homens foram cadastrados;\n");
    printf ("b) Quantas mulheres foram cadastradas;\n");
    printf ("c) A média de idade do grupo;\n");
    printf ("d) A média de idade dos homens;\n");
    printf ("e) Quantas mulheres tem mais de 20 anos.\n");
    printf ("=======================================================\n");
    printf("\n");
    while (c < 6) {
        printf ("IDADE? ");
        scanf ("%d", &Idade);
        printf ("SEXO [M/F]? ");
        scanf ("%s", Sexo);
        printf ("\n");
        strupr(Sexo);
        Soma = Soma + Idade;
        Media = Soma / 5.0;
        if (strcmp(Sexo, "M") == 0) {
            Homens = Homens + 1.0;
            IdadeH = IdadeH + Idade;
            MediaH = IdadeH / Homens;
        }
        if (strcmp(Sexo, "F") == 0) {
            Mulheres = Mulheres + 1;
        }
        if ((strcmp(Sexo, "F") == 0) && (Idade > 20)) {
            Mulher20 = Mulher20 + 1;
        }
        c++;
    }
    printf ("\nHOMENS CADASTRADOS: %.0f\n", Homens);
    printf ("MULHERES CADASTRADAS: %d\n", Mulheres);
    printf ("MÉDIA DE IDADE DO GRUPO: %3.1f\n", Media);
    printf ("MÉDIA DE IDADE DOS HOMENS: %3.1f\n", MediaH);
    printf ("MULHERES COM MAIS DE 20 ANOS: %d\n", Mulher20);
    return 0;
}
