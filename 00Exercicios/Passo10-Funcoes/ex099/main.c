#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int Potencia(int B, int E) {
int Res, Resultado;
    Res = pow(B,E);
    printf ("%d elevado a %d � %d", B, E, Res);
    return Resultado;
}

char R[] = "S";
int B, E, Resultado;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERC�CIO 99                     \n");
    printf (" Fa�a um programa que possua uma fun��o chamada Potencia()\n");
    printf ("  que receba dois par�metros num�ricos (base e expoente)\n");
    printf ("          e calcule o resultado da exponencia��o\n");
    printf ("=======================================================\n");
    printf("\n");
    do {
        printf ("BASE: ");
        scanf ("%d", &B);
        printf ("EXPOENTE: ");
        scanf ("%d", &E);
        printf ("\n");
        Resultado = Potencia(B, E);
        printf ("\nCALCULAR NOVAMENTE [ S/N ]? ");
        scanf ("%s", R);
        strupr(R);
    } while(strcmp(R, "S") == 0);
    if (strcmp(R, "N") == 0) {
        printf ("AT� A PR�XIMA...");
    }
    printf ("\n");
    return 0;
}
