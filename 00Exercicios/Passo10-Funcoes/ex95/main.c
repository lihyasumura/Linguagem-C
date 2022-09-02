#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int N1, N2, Somador(), Resultado;
char R[] = "S";

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 95                     \n");
    printf (" Refaça o exercício 90, só que agora em forma de função\n");
    printf ("  Somador(), que vai receber dois parâmetros e retornar\n");
    printf ("             o resultado da soma entre eles\n");
    printf ("=======================================================\n");
    printf("\n");
    do {
        printf ("1º VALOR: ");
        scanf ("%d", &N1);
        printf ("2º VALOR: ");
        scanf ("%d", &N2);
        printf ("\n");
        Resultado = Somador(N1,N2);
        printf ("\n\nFAZER UMA NOVA SOMA [ S/N ]? ");
        scanf ("%s", R);
        strupr(R);
        printf ("\n");
    } while(strcmp(R, "S") == 0);
    if (strcmp(R, "N") == 0) {
        printf ("ATÉ A PRÓXIMA...\n");
    }
    return 0;
}

int Somador(N1,N2) {
int Soma = N1 + N2;
    printf ("A soma entre %d e %d é %d", N1, N2, Soma);
    return Resultado;
}
