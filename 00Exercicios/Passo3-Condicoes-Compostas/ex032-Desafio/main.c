#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int PC, Chute;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("             EXERC�CIO 32 - Desafio                     \n");
    printf (" Criar um jogo onde o computador vai sortear um n�mero\n");
    printf ("entre 1 e 5 e o jogador vai tentar descobrir qual o valor\n");
    printf ("=======================================================\n");
    printf ("\n");
    PC = (1 + (rand() % 5));
    printf ("Qual o n�mero sorteado pelo computador? ");
    scanf ("%d", &Chute);
    if (Chute == PC) {
        printf ("\nPARAB�NS! Voc� acertou qual foi o n�mero sorteado!\n");
    } else {
        printf ("\nERROU! Mais sorte da pr�xima vez...\n");
    }
    return 0;
}
