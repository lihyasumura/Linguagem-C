#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char R[] = "S", Sexo[];
int Idade, Maior, IdadeH, Menor;
float Homens, Media;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERC�CIO 59                     \n");
    printf ("   Crie um programa que leia o sexo e a idade de v�rias pessoas.\n");
    printf (" O programa vai perguntar se o usu�rio quer continuar ou n�o a cada\n");
    printf ("                   pessoa. No final, mostre: \n");
    printf ("a) Qual � a maior idade lida;\n");
    printf ("b) Quantos homens foram cadastrados;\n");
    printf ("c) Qual � a idade da mulher mais jovem;\n");
    printf ("d) Qual � a m�dia de idade entre os homens.\n");
    printf ("=======================================================\n");
    printf("\n");
    while (strcmp(R, "S") == 0) {
        printf ("SEXO [M/F]: ");
        scanf ("%s", Sexo);
        strupr(Sexo);
        printf ("IDADE: ");
        scanf ("%d", &Idade);
        if (Idade > Maior) {
            Maior = Idade;
        }
        if (strcmp(Sexo, "M") == 0) {
            Homens = Homens + 1.0;
            IdadeH = IdadeH + Idade;
            Media = IdadeH / Homens;
        }
        if ((strcmp(Sexo, "F") == 0) && (Idade < Menor) || (Menor == 0)){
            Menor = Idade;
        }
        printf ("CONTINUAR [S/N]? \n");
        scanf ("%s", R);
        strupr(R);
    }
    printf ("\nMAIOR IDADE: %d\n", Maior);
    printf ("HOMENS CADASTRADOS: %.0f\n", Homens);
    printf ("MULHER MAIS JOVEM: %d\n", Menor);
    printf ("M�DIA DE IDADE ENTRE OS HOMENS: %3.1f\n", Media);

    return 0;
}
