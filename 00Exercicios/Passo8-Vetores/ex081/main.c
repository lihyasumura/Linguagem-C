#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Idade[], c = 0, Soma = 0, Maior = 0;
float Media;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 81                     \n");
    printf (" Ler a idade de 8 pessoas e guardar em um vetor\n");
    printf ("                No final, mostre:\n");
    printf ("a) Qual é a média de idade das pessoas cadastradas;\n");
    printf ("b) Em quais posições temos pessoas com mais de 25 anos;\n");
    printf ("c) Qual foi a maior idade digitada (podem haver repetições);\n");
    printf ("d) Em que posições digitamos a maior idade.\n");
    printf ("=======================================================\n");
    printf("\n");
    for (c = 0; c < 8; c++) {
        printf ("%da. IDADE: ", c + 1);
        scanf ("%d", &Idade[c]);
        if (Idade[c] > Maior) {
            Maior = Idade[c];
        }
        Soma = Soma + Idade[c];
        Media = Soma / 8.0;

    }
    printf ("\n -- MÉDIA DE IDADE: %3.1f\n", Media);
    printf (" -- ÍNDICE DAS PESSOAS COM MAIS DE 25 ANOS: \n");
    for (c = 0; c < 8; c++) {
        if (Idade[c] > 25) {
            printf ("[ %2d ]", c);
        }
    }
    printf ("\n -- MAIOR IDADE DIGITADA: %2d", Maior);
    printf ("\n -- A MAIOR IDADE ESTÁ NOS SEGUINTES ÍNDICES: \n");
    for (c = 0; c < 8; c++) {
        if (Idade[c] == Maior) {
            printf ("[ %2d ]", c);
        }
    }
    printf ("\n");
    return 0;
}
