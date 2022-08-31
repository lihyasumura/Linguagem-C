#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char Tipo[];
int Dias;
float Km, PrecoDia, PrecoKm, Total;

int main()
{
    setlocale (LC_ALL, "");

    printf ("===================================================================\n");
    printf ("             EXERC�CIO 35                     \n");
    printf (" Fa�a um programa que leia o tipo de carro alugado (popular ou luxo), \n");
    printf ("      quantos dias de aluguel e quantos km foram percorridos.\n");
    printf ("         Mostrar o pre�o a ser pago de acordo com a tabela\n");
    // CARROS POPULARES (R$90/DIA)
    // AT� 100KM = R$0,20/KM
    // ACIMA DE 100KM = R$0,10/KM
    // CARROS DE LUXO (R$150/DIA)
    // AT� 200KM = R$O,30/KM
    // ACIMA DE 200 KM = R$0,25KM
    printf ("====================================================================\n");
    printf("\n");
    printf ("POPULAR OU LUXO? ");
    scanf ("%s", Tipo);
    strupr(Tipo);
    printf ("DIAS LOCADOS? ");
    scanf ("%d", &Dias);
    printf ("DIST�NCIA PERCORRIDA? ");
    scanf ("%f", &Km);
    printf ("\n");
    if (strcmp(Tipo, "POPULAR") == 0) {
        PrecoDia = 90.0 * Dias;
        if (Km <= 100) {
            PrecoKm = 0.20 * Km;
        } else {
            PrecoKm = 0.10 * Km;
        }
        Total = PrecoDia + PrecoKm;
        printf ("CARRO: POPULAR\n");
        printf ("DIST�NCIA: %3.1f\n", Km);
        printf ("DIAS LOCADOS: %d\n", Dias);
        printf ("\n");
        printf ("TOTAL: R$%6.2f\n", Total);
    } else if (strcmp(Tipo, "LUXO") == 0) {
        PrecoDia = 150.0 * Dias;
        if (Km <= 200) {
            PrecoKm = 0.30 * Km;
        } else {
            PrecoKm = 0.25 * Km;
        }
        Total = PrecoDia + PrecoKm;
        printf ("CARRO: %s\n", Tipo);
        printf ("DIST�NCIA: %3.1f\n", Km);
        printf ("DIAS LOCADOS: %d\n", Dias);
        printf ("\n");
        printf ("TOTAL: R$%6.2f\n", Total);
    } else {
        printf ("Alguma informa��o foi inserida incorretamente...\n");
        printf ("Tente novamente...\n");
    }
    return 0;
}
