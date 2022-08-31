#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Horas, Pontos;
float Dinheiro;

int main()
{
    setlocale (LC_ALL, "");

    printf ("===================================================================\n");
    printf ("             EXERCÍCIO 36                     \n");
    printf ("  Ler quantas horas de atividade uma pessoa teve no mês,");
    printf ("calcule e mostre quantos pontos e quantos R$ ela conseguiu");
// -- Cada hora de atividade física no mês vale pontos --
// -- até 10 horas de atividade no mês: 2 pontos por hora --
// -- de 10 horas até 20 horas: 5 pontos por hora --
// -- acima de 20 horas: 10 pontos por hora --
// A cada ponto ganho, o cliente fatura R$0,05"
    printf ("====================================================================\n");
    printf("\n");
    printf ("TOTAL DE HORAS DE TREINAMENTO: ");
    scanf ("%d", &Horas);
    printf ("\n");
    if (Horas <= 10) {
        Pontos = Horas * 2;
        Dinheiro = Pontos * 0.05;
        printf ("PONTOS: %d\n", Pontos);
        printf ("FATURA: R$%4.2f\n", Dinheiro);
    } else if ((Horas > 10) && (Horas <= 20)) {
        Pontos = Horas * 5;
        Dinheiro = Pontos * 0.05;
        printf ("PONTOS: %d\n", Pontos);
        printf ("FATURA: R$%4.2f\n", Dinheiro);
    } else {
        Pontos = Horas * 10;
        Dinheiro = Pontos * 0.05;
        printf ("PONTOS: %d\n", Pontos);
        printf ("FATURA: R$%4.2f\n", Dinheiro);
    }
    return 0;
}
