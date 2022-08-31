#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char R[1] = "S";
int c = 1, Idade, SomaI, Maior21;
float Soma, Media;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 62                     \n");
    printf ("Ler a idade de várias pessoas. A cada laço, você deverá\n");
    printf (" perguntar ao usuário se ele quer ou não continuar.\n");
    printf ("                 No final, mostre: \n");
    printf ("a) Quantas idades foram digitadas;\n");
    printf ("b) Qual é a média entre as idades digitadas;\n");
    printf ("c) Quantas pessoas tem 21 anos ou mais.\n");
    printf ("=======================================================\n");
    printf("\n");
    do {
        printf ("Digite a %da. idade: ", c);
        scanf ("%d", &Idade);
        printf ("CONTINUAR [S/N]? ");
        scanf ("%s", R);
        strupr(R);
        printf ("\n");
        Soma = Soma + 1.0;
        SomaI = SomaI + Idade;
        Media = SomaI / Soma;
        c++;
        if (Idade >= 21) {
            Maior21 = Maior21 + 1;
        }
    } while (strcmp(R, "S") == 0);
    printf ("\nIDADES DIGITADAS: %.0f\n", Soma);
    printf ("MÉDIA DAS IDADES: %3.1f\n", Media);
    printf ("PESSOAS COM 21 ANOS OU MAIS: %d\n", Maior21);
    return 0;
}
