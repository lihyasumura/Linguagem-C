#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

float Media(float N1, float N2) {
float med, Soma, Resultado;
    Soma = N1 + N2;
    med = Soma / 2.0;
    printf ("A soma de %3.1f com %3.1f é %4.2f\n", N1, N2, Soma);
    printf ("A média é de %3.1f\n", med);
    return Resultado;
}

char R[] = "S";
float N1, N2, Resultado;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 96                     \n");
    printf (" Crie um programa que tenha uma função Media(), que vai\n");
    printf (" receber as 2 notas de um aluno e retornar a sua média\n");
    printf ("=======================================================\n");
    printf("\n");
    do {
        printf ("1ª NOTA: ");
        scanf ("%f", &N1);
        printf ("2ª NOTA: ");
        scanf ("%f", &N2);
        printf ("\n");
        Resultado = Media(N1, N2);
        printf ("\nNOVO CÁLCULO [ S/N ]? ");
        scanf ("%s", R);
        strupr(R);
        printf ("\n");
    } while(strcmp(R, "S") == 0);
    if (strcmp(R, "N") == 0) {
        printf ("ATÉ A PRÓXIMA...\n");
    }
    return 0;
}
