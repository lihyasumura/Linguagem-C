#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int N[], c = 0, N1, Iguais = 0;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERC�CIO 80                     \n");
    printf ("  Preencher um vetor de 30 posi��es com n�meros entre\n");
    printf (" 1 e 15 sorteados pelo computador. Depois disso, pe�a ao\n");
    printf ("usu�rio digitar um n�mero (chave) e seu programa deve mostrar\n");
    printf (" em que posi��es essa chave foi encontrada. Mostre quantas\n");
    printf ("                  vezes a chave foi sorteada\n");
    printf ("=======================================================\n");
    printf ("\n");
    for (c = 0; c < 29; c++) {
        N[c] = (1 + rand() % 15);
    }
    printf ("DIGITE UM N�MERO: ");
    scanf ("%d", &N1);
    for (c = 0; c < 29; c++) {
        if (c % 5 == 0) {
            printf ("\n");
        }
    printf ("[ %2d ]", N[c]);
    }
    printf ("\n\nO N�MERO DIGITADO FOI ENCONTRADO NAS SEGUINTES POSI��ES: \n");
    printf ("�NDICES: ");
    for (c = 0; c < 29; c++) {
        if (N[c] == N1) {
            Iguais = Iguais + 1;
            printf ("[ %2d ]", c);
        }
    }
    printf ("\n\nO N�MERO %2d FOI SORTEADO %2d VEZES\n", N1, Iguais);
    return 0;
}
