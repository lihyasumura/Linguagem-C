#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void Fibonacci();
char R[] = "S";
int T;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERC�CIO 94 - DESAFIO                    \n");
    printf (" Desenvolva um aplicativo que tenha um procedimento chamado\n");
    printf ("Fibonacci() que recebe um �nico valor inteiro como par�metro,\n");
    printf ("   indicando quantos termos da sequ�ncia ser�o mostrados.\n");
    printf ("=======================================================\n");
    printf("\n");
    do {
        printf ("QUANTOS TERMOS DA SEQU�NCIA FIBONNACI VOC� QUER VER? ");
        scanf ("%d", &T);
        printf ("\n");
        Fibonacci(T);
        printf ("\n\nALTERAR O N�MERO DE TERMOS DA SEQU�NCIA [ S/N ]? ");
        scanf ("%s", R);
        strupr(R);
    } while(strcmp(R, "S") == 0);
    if (strcmp(R, "N") == 0) {
        printf ("AT� A PR�XIMA...");
    }
    printf ("\n");
    return 0;
}

void Fibonacci(int T) {
int c = 0, c1 = 0, F = 1, F1 = 0, Res = 0;
    for (c = 0; c < T; c++) {
        if ((c1 % 5 == 0) && (c != 0)) {
            printf ("\n");
        }
        Res = F + F1;
        F = F1;
        F1 = Res;
        printf ("[ %2d ]", Res);
        c1++;
    }
}
