#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int c = 1, N[20], Acima5, Div3;
int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERC�CIO 50                     \n");
    printf ("Desenvolva um programa que fa�a o sorteio de 20 n�meros\n");
    printf (" entre 0 e 10 e mostre na tela quais foram os n�meros\n");
    printf ("  sorteados, quantos est�o acima de 5 e quantos s�o\n");
    printf ("                     divis�veis por 3\n");
    printf ("=======================================================\n");
    printf("\n");
    while (c < 21) {
        N[c] = (1 + (rand() % 10));
        printf ("[ %3d ]", N[c]);
        if (c % 5 == 0) {
            printf ("\n");
        }
        if (N[c] > 5) {
            Acima5 = Acima5 + 1;
        }
        if (N[c] % 3 == 0) {
            Div3 = Div3 + 1;
        }
        c++;
    }
    printf ("\nQUANTIDADE DE N�MEROS ACIMA DE 5: %d\n", Acima5);
    printf ("QUANTIDADE DE N�MEROS DIVIS�VEIS POR 3: %d\n", Div3);
    return 0;
}
