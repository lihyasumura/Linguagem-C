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
    printf ("                  EXERC�CIO 95                     \n");
    printf (" Refa�a o exerc�cio 90, s� que agora em forma de fun��o\n");
    printf ("  Somador(), que vai receber dois par�metros e retornar\n");
    printf ("             o resultado da soma entre eles\n");
    printf ("=======================================================\n");
    printf("\n");
    do {
        printf ("1� VALOR: ");
        scanf ("%d", &N1);
        printf ("2� VALOR: ");
        scanf ("%d", &N2);
        printf ("\n");
        Resultado = Somador(N1,N2);
        printf ("\n\nFAZER UMA NOVA SOMA [ S/N ]? ");
        scanf ("%s", R);
        strupr(R);
        printf ("\n");
    } while(strcmp(R, "S") == 0);
    if (strcmp(R, "N") == 0) {
        printf ("AT� A PR�XIMA...\n");
    }
    return 0;
}

int Somador(N1,N2) {
int Soma = N1 + N2;
    printf ("A soma entre %d e %d � %d", N1, N2, Soma);
    return Resultado;
}
