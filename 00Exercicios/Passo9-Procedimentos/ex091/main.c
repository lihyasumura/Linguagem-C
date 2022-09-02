#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Maior();
int N, N1;
char R[] = "S";

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 91                     \n");
    printf (" Desenvolva um algoritmo que leia dois valores pelo teclado\n");
    printf ("    e passe esses valores para um procedimento Maior()\n");
    printf ("que vai verificar qual deles é o maior e mostrá'lo na tela.\n");
    printf (" Caso os dois valores sejam iguais, mostrar uma mensagem\n");
    printf ("          informando essa característica.\n");
    printf ("=======================================================\n");
    printf("\n");
    do {
    printf ("1º VALOR: ");
    scanf ("%d", &N);
    printf ("2º VALOR: ");
    scanf ("%d", &N1);
    printf ("\n");
    Maior (N, N1);
    printf ("\n");
    printf ("COMPARAR NOVAMENTE [ S/N ]? ");
    scanf ("%s", R);
    strupr(R);
    printf ("\n");
    } while (strcmp(R, "S") == 0);
    if (strcmp(R, "N") == 0) {
        printf ("ATÉ A PRÓXIMA...");
    }
    printf ("\n");
    return 0;
}

void Maior(int N, int N1) {
    if (N > N1) {
        printf ("%d é maior que %d\n", N, N1);
    } else if (N1 > N) {
        printf ("%d é maior que %d\n", N1, N);
    } else {
        printf ("Os dois números são iguais.\n");
    }
}
