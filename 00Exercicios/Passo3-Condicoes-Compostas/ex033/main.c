#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float Valor, Sal, PrestacaoMensal, Sal30;
int Anos, AnoMes;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("             EXERC�CIO 33                     \n");
    printf (" Escreva um programa para aprovar ou n�o o empr�stimo\n");
    printf ("banc�rio para compra de uma casa. Ler o valor da casa, ");
    printf ("o sal�rio do comprador e em quantos anos ele vai pagar.");
    printf ("Calcule o valor da presta��o mensal sabendo que ele ");
    printf ("n�o pode exceder 30 porcento do sal�rio, ser� negado");
    printf ("=======================================================\n");
    printf("\n");
    printf ("VALOR DA CASA? R$");
    scanf ("%f", &Valor);
    printf ("SAL�RIO DO COMPRADOR? R$");
    scanf ("%f", &Sal);
    printf ("Pagar em quantos anos? ");
    scanf ("%d", &Anos);
    printf ("\n");
    AnoMes = Anos * 12;
    Sal30 = Sal + (Sal * 3 / 100);
    PrestacaoMensal = Valor / AnoMes;
    if (PrestacaoMensal > Sal30) {
        printf ("As presta��es mensais excedem 30%% do seu sal�rio!\n");
        printf ("Empr�stimo negado!\n");
        printf ("VALOR MENSAL: R$%6.2f\n", PrestacaoMensal);
    } else {
        printf ("As presta��es mensais n�o excedem 30%% do seu sal�rio\n");
        printf ("Empr�stimo aprovado!\n");
        printf ("VALOR MENSAL: R$%6.2f\n", PrestacaoMensal);
    }
    return 0;
}
