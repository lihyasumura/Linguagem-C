#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int c = 1, Idade, Soma;
float Media, Alunos;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERC�CIO 58                     \n");
    printf ("Fa�a um algoritmo que leia a idade de v�rios alunos de uma\n");
    printf (" turma. O programa vai parar quando for digitado 999.\n");
    printf ("No final, mostre quantos alunos existem na turma e qual\n");
    printf ("            � a m�dia de idade do grupo\n");
    printf ("=======================================================\n");
    printf("\n");
    while (Idade != 999) {
        printf ("IDADE %d: ", c);
        scanf ("%d", &Idade);
        if (Idade != 999) {
            Alunos = Alunos + 1.0;
            Soma = Soma + Idade;
            Media = Soma / Alunos;
        }
        c++;
    }
    printf ("\nTOTAL DE ALUNOS: %.0f\n", Alunos);
    printf ("IDADE M�DIA: %3.1f\n", Media);
    return 0;
}
