#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int Maior(int N1, int N2, int N3) {
int maior, Resultado;
    if ((N1 > N2) && (N1 > N3)) {
        printf ("%d foi o maior valor digitado\n", N1);
    } else if ((N2 > N1) && (N2 > N3)) {
        printf ("%d foi o maior valor digitado\n", N2);
    } else if ((N3 > N1) && (N3 > N2)) {
        printf ("%d foi o maior valor digitado\n", N3);
    } else {
        printf ("Os três valores são iguais\n");
    }
    return Resultado;
}

char R[] = "S";
int N1, N2, N3, Resultado;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 97                     \n");
    printf (" Refaça o exercício 91, só qe agora em forma de função\n");
    printf ("Maior() que receba três números como parâmetro e retorne\n");
    printf ("              qual deles o maior valor\n");
    printf ("=======================================================\n");
    printf("\n");
    do {
        printf ("1º VALOR: ");
        scanf ("%d", &N1);
        printf ("2º VALOR: ");
        scanf ("%d", &N2);
        printf ("3º VALOR: ");
        scanf ("%d", &N3);
        printf ("\n");
        Resultado = Maior(N1, N2, N3);
        printf ("CONFERIR OUTROS VALORES [ S/N ]? ");
        scanf ("%s", R);
        strupr(R);
        printf ("\n");
    } while(strcmp(R, "S") == 0);
    if (strcmp(R, "N") == 0) {
        printf ("ATÉ A PRÓXIMA...");
    }
    printf ("\n");
    return 0;
}
