#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void Somador();
char R[] = "S";
int c = 0; N1, N2;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 90                     \n");
    printf (" Desenvolva um algoritmo que leia dois valores pelo\n");
    printf (" teclado e passe esses valores para um procedimento\n");
    printf (" Somador() que vai calcular e mostrar a soma deles.\n");
    printf ("=======================================================\n");
    printf("\n");
    do {
        printf ("1º VALOR: ");
        scanf ("%d", &N1);
        printf ("2º VALOR: ");
        scanf ("%d", &N2);
        printf ("\n");
        Somador(N1, N2);
        printf ("\nDESEJA SOMAR OUTROS VALORES [ S/N ]? ");
        scanf ("%s", R);
        strupr(R);
        printf ("\n");
    } while (strcmp(R, "S") == 0);
    if (strcmp(R, "N") == 0) {
        printf ("ATÉ A PRÓXIMA...\n");
    }
    return 0;
}

void Somador(int N1, int N2) {
int N3;
    N3 = N1 + N2;
    printf ("A SOMA ENTRE %d e %d é %d\n", N1, N2, N3);
}
