#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Contador();
int I, F, P;
char R[] = "S";

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERC�CIO 93                     \n");
    printf ("Fa�a um programa que tenha um procedimento chamado Contador()\n");
    printf ("que recebe tr�s valores como par�metro: in�cio, fim e o passo\n");
    printf ("O programa principal deve solicitar a digita��o desses valores\n");
    printf (" e pass�-los ao procedimento, que vai mostrar a contagem\n");
    printf ("=======================================================\n");
    printf("\n");
    do {
    printf ("IN�CIO: ");
    scanf ("%d", &I);
    printf ("FIM: ");
    scanf ("%d", &F);
    printf ("PASSO: ");
    scanf ("%d", &P);
    printf ("\n");
    Contador(I, F, P);
    printf ("\n\nINICIAR OUTRA CONTAGEM [ S/N ]? ");
    scanf ("%s", R);
    strupr(R);
    printf ("\n");
    } while (strcmp(R, "S") == 0);
    printf ("AT� A PR�XIMA...");
    printf ("\n");
    return 0;
}

void Contador(int i, int f, int p) {
int c = 0, c1 = 0;
    if (i < f) {
        for (c = i; c <= F;) {
            if ((c1 % 5 == 0) && (c1 != 0)) {
                printf ("\n");
            }
            printf ("[ %2d ]", c);
            c = c + p;
            c1++;
        }
    }
    if ( i > f) {
        for (c = i; c >= F;) {
            if ((c1 % 5 == 0) && (c1 != 0)) {
                printf ("\n");
            }
            printf ("[ %2d ]", c);
            c = c - p;
            c1++;
        }
    }
}
