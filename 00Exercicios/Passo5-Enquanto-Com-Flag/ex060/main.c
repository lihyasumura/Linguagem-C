#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char Nome[15], Sexo[], R[] = "S", NomeVelha[15], NomeJovem[15];
int Idade, SomaI,  Maior, Menor, MaiorH30, MenorF18;
float c = 1.0, Media;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 60                     \n");
    printf ("Desenvolva um algoritmo que leia o nome, a idade e o sexo de\n");
    printf (" várias pessoas. O programa vai perguntar se o usuário quer\n");
    printf ("            ou não contiuar. No final, mostre: ");
    printf ("a) O nome da pessoa mais velha;\n");
    printf ("b) O nome da mulher mais jovem;\n");
    printf ("c) A média de idade do grupo;\n");
    printf ("d) Quantos homens tem mais de 30 anos\n");
    printf ("e) Quantas mulheres tem menos de 18 anos\n");
    printf ("=======================================================\n");
    printf("\n");
    while (strcmp(R, "S") == 0) {
        printf ("NOME: ");
        scanf ("%s", Nome);
        strupr(Nome);
        printf ("IDADE: ");
        scanf ("%d", &Idade);
        printf ("SEXO [M/F]: ");
        scanf ("%s", Sexo);
        strupr(Sexo);
        printf ("CONTINUAR [S/N]? \n");
        scanf ("%s", R);
        strupr(R);
        SomaI = SomaI + Idade;
        Media = SomaI / c;
        c++;
        if (Idade > Maior) {
            Maior = Idade;
            strcpy(NomeVelha, Nome);
        }
        if ((strcmp(Sexo, "F") == 0) && (Idade < Menor) || (Menor == 0)) {
            Menor = Idade;
            strcpy(NomeJovem, Nome);
        }
        if ((strcmp(Sexo, "M") == 0) && (Idade > 30)) {
            MaiorH30 = MaiorH30 + 1;
        }
        if ((strcmp(Sexo, "F") == 0) && (Idade < 18)) {
            MenorF18 = MenorF18 + 1;
        }
    }
    printf ("\nPESSOA MAIS VELHA: %s\n", NomeVelha);
    printf ("MULHER MAIS JOVEM: %s\n", NomeJovem);
    printf ("MÉDIA DE IDADE DO GRUPO: %3.1f\n", Media);
    printf ("HOMENS COM MAIS DE 30 ANOS: %d\n", MaiorH30);
    printf ("MULHERES COM MENOS DE 18 ANOS: %d\n", MenorF18);
    return 0;
}
