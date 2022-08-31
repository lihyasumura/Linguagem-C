#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int c = 4, N, PC;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERC�CIO 55 - DESAFIO                     \n");
    printf ("     Vamos melhorar o jogo que fizemos no exerc�cio 32.\n");
    printf (" A partir de agora, o computador vai sortear um n�mero entre\n");
    printf (" 1 e 10 e o jogador vai ter 4 tentativas para tentar acertar\n");
    printf ("=======================================================\n");
    printf("\n");
    PC = (1 + (rand() % 10));
    while ((N != PC) && (c > 0)) {
        printf ("CHUTE: ");
        scanf ("%d", &N);
        c--;
        if (N == PC) {
            printf ("\nPARAB�NS! VOC� DESCOBRIU O N�MERO SORTEADO!\n");
        } else {
            printf ("ERROU! VOC� TEM MAIS %d TENTATIVAS!\n", c);
        }
    }
    if ((N != PC) && (c == 0)) {
        printf ("\nO n�mero sorteado foi %d\n", PC);
    }
    return 0;
}
