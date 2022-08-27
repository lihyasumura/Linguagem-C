#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int N1, N2, N3;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("             EXERC�CIO 25 - DESAFIO                     \n");
    printf (" Ler o tamanho de tr�s segmentos de reta e analisar seus \n");
    printf ("    comprimentos. � poss�vel formar um tri�ngulo?\n");
    printf ("  Matematicamente, o comprimento de cada lado deve ser \n");
    printf ("          menor que a soma dos outros dois\n");
    printf ("=======================================================\n");
    printf ("\n");
    printf("1� comprimento: ");
    scanf ("%d", &N1);
    printf ("2� comprimento: ");
    scanf ("%d", &N2);
    printf ("3� comprimento: ");
    scanf ("%d", &N3);
    printf ("\n");
    if ((N1 < N2 + N3) && (N2 < N1 + N3) && (N3 < N1 + N2)) {
        printf ("Sim, � poss�vel formar um tri�ngulo!\n");
    }
    if ((N1 > N2 + N3) || (N2 > N1 + N3) || (N3 > N1 + N2))  {
        printf ("Um dos lados � maior que a soma dos outros dois!\n");
        printf ("N�o � poss�vel formar um tri�ngulo com tais medidas!\n");
    }
    return 0;
}
