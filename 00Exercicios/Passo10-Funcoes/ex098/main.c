#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int SuperSomador(int I, int F) {
int c = 0, Soma = 0, VI = I;
    for (c = I; c <= F; c++) {
        Soma = Soma + I;
        I++;
    }
    printf ("A soma de todos os valores entre %d e %d � %d\n", VI, F, Soma);
}

char R[] = "S";
int I, F, Resultado;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERC�CIO 98                     \n");
    printf (" Crie um programa que tenha uma fun��o SuperSomador() que\n");
    printf ("  vai receber dois n�meros como par�metro e vai retornar\n");
    printf ("a soma de todos os valores no entervalo entre os dois valores\n");
    printf ("=======================================================\n");
    printf("\n");
    do {
        printf ("VALOR INICIAL: ");
        scanf ("%d", &I);
        printf ("VALOR FINAL: ");
        scanf ("%d", &F);
        printf ("\n");
        Resultado = SuperSomador(I, F);
        printf ("\nCALCULAR OUTROS VALORES [ S/N ]? ");
        scanf ("%s", R);
        strupr(R);
    } while(strcmp(R, "S") == 0);
    if (strcmp(R, "N") == 0) {
        printf ("AT� A PR�XIMA...");
    }
    printf ("\n");
    return 0;
}
