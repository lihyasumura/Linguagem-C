#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Cigarro, Anos, MinutosPorDia, PerdaPorAno, PerdaDeDias;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("             EXERC�CIO 16 - DESAFIO                    \n");
    printf ("  Calcular a redu��o do tempo de vida de um fumante    \n");
    printf ("=======================================================\n");
    // 1 cigarro = - 10 min
    printf ("\n");
    printf("Quantos cigarros voc� fuma por dia? ");
    scanf ("%d", &Cigarro);
    printf ("Fuma h� quantos anos? ");
    scanf ("%d", &Anos);
    MinutosPorDia = Cigarro * 10;
    PerdaPorAno = 525600 - MinutosPorDia;
    PerdaDeDias = PerdaPorAno / 1440;
    printf ("\n");
    printf ("Fumante h� %d anos, %d cigarros por dia\n", Anos, Cigarro);
    printf ("Voc� j� perdeu %d", PerdaDeDias);
    printf ("\n");

    return 0;
}
