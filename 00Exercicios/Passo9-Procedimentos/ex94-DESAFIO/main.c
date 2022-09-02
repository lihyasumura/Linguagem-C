#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char R[] = "S";

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 94 - DESAFIO                    \n");
    printf (" Desenvolva um aplicativo que tenha um procedimento chamado\n");
    printf ("Fibonacci() que recebe um único valor inteiro como parâmetro,\n");
    printf ("   indicando quantos termos da sequência serão mostrados.\n");
    printf ("=======================================================\n");
    printf("\n");
    do {
        printf ("QUANTOS TERMOS DA SEQUÊNCIA FIBONNACI VOCÊ QUER VER? ");
        scanf ("%d", &T);
        printf ("\n");
        printf ("ALTERAR O NÚMERO DE TERMOS DA SEQUÊNCIA [ S/N ]? ");
        scanf ("%s", R);
        strupr(R);
    } while(strcmp(R, "S") == 0);
    printf ("\n");
    return 0;
}

void Fibonacci(int T) {
int c = 0, c1 = 0;
    for (c = 0; c < T; c++) {
        if ((c1 % 5 == 0) && (c != 0)) {
            printf ("\n");
        }
        printf ("[ %2d ]", Res);
        c1++;
    }
}
