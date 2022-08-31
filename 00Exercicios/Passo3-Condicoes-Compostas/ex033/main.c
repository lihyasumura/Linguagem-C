#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float Valor, Sal, PrestacaoMensal, Sal30;
int Anos, AnoMes;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("             EXERCÍCIO 33                     \n");
    printf (" Escreva um programa para aprovar ou não o empréstimo\n");
    printf ("bancário para compra de uma casa. Ler o valor da casa, ");
    printf ("o salário do comprador e em quantos anos ele vai pagar.");
    printf ("Calcule o valor da prestação mensal sabendo que ele ");
    printf ("não pode exceder 30 porcento do salário, será negado");
    printf ("=======================================================\n");
    printf("\n");
    printf ("VALOR DA CASA? R$");
    scanf ("%f", &Valor);
    printf ("SALÁRIO DO COMPRADOR? R$");
    scanf ("%f", &Sal);
    printf ("Pagar em quantos anos? ");
    scanf ("%d", &Anos);
    printf ("\n");
    AnoMes = Anos * 12;
    Sal30 = Sal + (Sal * 3 / 100);
    PrestacaoMensal = Valor / AnoMes;
    if (PrestacaoMensal > Sal30) {
        printf ("As prestações mensais excedem 30%% do seu salário!\n");
        printf ("Empréstimo negado!\n");
        printf ("VALOR MENSAL: R$%6.2f\n", PrestacaoMensal);
    } else {
        printf ("As prestações mensais não excedem 30%% do seu salário\n");
        printf ("Empréstimo aprovado!\n");
        printf ("VALOR MENSAL: R$%6.2f\n", PrestacaoMensal);
    }
    return 0;
}
