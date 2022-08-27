#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float Km, P, Pkm, PD;
int D;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("                EXERCÍCIO 14                          \n");
    printf (" Ler quantos quilômetros foi percorrido por um carro   \n");
    printf ("  alugado e a quantidade de dias que ele foi locado    \n");
    printf ("             Calcule o total a pagar                   \n");
    printf ("=======================================================\n");
    printf ("\n");
    // R$90,00 por dia e R$0,20 por km rodado
    printf("Quilometragem percorrida: ");
    scanf ("%f", &Km);
    printf ("Total de dias de locação: ");
    scanf ("%d", &D);
    Pkm = Km * 0.20;
    PD = D * 90.0;
    P = Pkm + PD;
    printf ("\n");
    printf ("DIAS DE ALUGUEL: %d\n", D);
    printf ("DISTÂNCIA PERCORRIDA: %4.0f\n", Km);
    printf ("VALOR TOTAL: R$%6.2f\n", P);
    printf ("\n");

    return 0;
}
