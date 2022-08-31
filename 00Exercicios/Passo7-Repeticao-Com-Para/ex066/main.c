#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char R[] = "S";
int N, c, Res;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 66                     \n");
    printf ("  Ler um número qualquer e mostrar a tabuada dele\n");
    printf ("=======================================================\n");
    printf("\n");
    while (strcmp(R, "S") == 0) {
        printf ("Digite um número: ");
        scanf ("%d", &N);
        printf ("\n**************************************\n");
        printf ("       TABUADA DO [ %d ]\n\n", N);
        for (c = 1; c < 11; c++) {
            Res = N * c;
            printf ("[ %2d ]  x  [ %2d ] = [ %2d ] \n", N, c, Res);
        }
        printf ("\n**************************************\n");
        printf ("\n\nCONTINUAR [S/N]? ");
        scanf ("%s", R);
        strupr(R);
        printf ("\n");
    }
    return 0;
}
