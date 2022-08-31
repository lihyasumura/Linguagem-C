#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Voce, PC, VoceP = 0, PCP = 0, Empate = 0;
char Continuar;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("             EXERCÍCIO 31 - Desafio                     \n");
    printf ("   Criar um jogo PEDRA-PAPEL-TESOURA\n");
    printf ("=======================================================\n");
    printf("\n");
    printf ("[ 1 ] PEDRA   [ 2 ] PAPEL   [ 3 ] TESOURA   [ 9 ] SAIR");
    printf ("\n");
    while (Voce != 9) {
        printf ("NÚMERO ESCOLHIDO: ");
        scanf ("%d", &Voce);
        printf("\n");
        switch (Voce) {
            case 1:
                printf ("VOCÊ: PEDRA\n");
            break;
            case 2:
                printf ("VOCÊ: PAPEL\n");
            break;
            case 3:
                printf ("VOCÊ: TESOURA\n");
            break;
        }
        if (Voce != 9) {
        PC = (1 + (rand() % 3));
        switch (PC) {
            case 1:
                printf ("COMPUTADOR: PEDRA\n");
            break;
            case 2:
                printf("COMPUTADOR: PAPEL\n");
            break;
            case 3:
                printf ("COMPUTADOR: TESOURA\n");
            break;
        }
        }
        if ((Voce == 1) && (PC == 3)) {
            printf (" -- Um ponto pra você! -- \n\n");
            VoceP = VoceP + 1;
        } else if ((Voce == 2) && (PC == 1)) {
            printf (" -- Um ponto pra você! -- \n\n");
            VoceP = VoceP + 1;
        } else if ((Voce == 2) && (PC == 3)) {
            printf (" -- Um ponto pro computador! -- \n\n");
            PCP = PCP + 1;
        } else if ((Voce == 3) && (PC == 2)) {
            printf (" -- Um ponto pra você! -- \n\n");
            VoceP = VoceP + 1;
        } else if (Voce == PC) {
            printf (" -- EMPATE! -- \n\n");
            Empate = Empate + 1;
        } else if (Voce != 9) {
            printf (" -- Ponto do computador! -- \n\n");
            PCP = PCP + 1;
        }
        if (Voce == 9) {
            printf ("SEUS PONTOS: %d\n", VoceP);
            printf ("PONTOS DO COMPUTADOR: %d\n", PCP);
            printf ("EMPATE: %d\n", Empate);
        }
    }
    printf ("\n");
    return 0;
}
