#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Cigarro, Anos, MinutosPorDia, PerdaPorAno, PerdaDeDias;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("             EXERCÍCIO 16 - DESAFIO                    \n");
    printf ("  Calcular a redução do tempo de vida de um fumante    \n");
    printf ("=======================================================\n");
    // 1 cigarro = - 10 min
    printf ("\n");
    printf("Quantos cigarros você fuma por dia? ");
    scanf ("%d", &Cigarro);
    printf ("Fuma há quantos anos? ");
    scanf ("%d", &Anos);
    MinutosPorDia = Cigarro * 10;
    PerdaPorAno = 525600 - MinutosPorDia;
    PerdaDeDias = PerdaPorAno / 1440;
    printf ("\n");
    printf ("Fumante há %d anos, %d cigarros por dia\n", Anos, Cigarro);
    printf ("Você já perdeu %d", PerdaDeDias);
    printf ("\n");

    return 0;
}
