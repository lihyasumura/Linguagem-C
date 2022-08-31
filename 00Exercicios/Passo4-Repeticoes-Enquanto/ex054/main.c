#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int c = 1, Maior90, Menor50, Maior100;
float Altura, Peso, SomaA, MediaA;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 54                     \n");
    printf ("Desenvolva um aplicativo que leia o peso e a altura de\n");
    printf ("          7 pessoas, mostrando no final: \n");
    printf ("a) Qual foi a média de altura do grupo;\n");
    printf ("b) Quantas pessoas pesam mais de 90kg;\n");
    printf ("c) Quantas pessoas pesam menos de 50kg e tem menos de 1.60m;\n");
    printf ("d) Quantas pessoas medem mais de 1.90m e pesam mais de 100kg.\n");
    printf ("=======================================================\n");
    printf("\n");
    while (c < 8) {
        printf ("ALTURA: ");
        scanf ("%f", &Altura);
        printf ("PESO: ");
        scanf ("%f", &Peso);
        printf ("\n");
        SomaA = SomaA + Altura;
        MediaA = SomaA / 7;
        if (Peso > 90.0) {
            Maior90 = Maior90 + 1;
        }
        if ((Peso < 50) && (Altura < 1.60)) {
            Menor50 = Menor50 + 1;
        }
        if ((Altura > 1.90) && (Peso > 100)) {
            Maior100 = Maior100 + 1;
        }
        c++;
    }
    printf ("\nMÉDIA DE ALTURA DO GRUPO: %3.2f\n", MediaA);
    printf ("PESSOAS COM MAIS DE 90KG: %d\n", Maior90);
    printf ("PESSOAS COM MENOS DE 50KG E MENOS DE 1.60: %d\n", Menor50);
    printf ("PESSOAS COM MAIS DE 1.90 E COM MAIS DE 100KG: %d\n", Maior100);
    return 0;
}
