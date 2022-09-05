#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "funcoes.h"

int main()
{
    setlocale (LC_ALL, "");
    do {
        system("clear||cls");
        Escolha();
        if ((N != 4) && (N != 5)) {
            Computador();
        }
        if ((N != 0) && (PC != 0)) {
            Ganhador(N, PC);
        }
        Menu();
        printf ("SUA VEZ: ");
        scanf ("%d", &N);
    } while (N != 4);
    if (N == 4) {
        printf ("\nCALCULANDO RESULTADO...\n");
        Resultado();
    }

    return 0;
}
