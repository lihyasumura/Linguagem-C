#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int D;
float Sal;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("                EXERCÍCIO 15                          \n");
    printf ("   Ler o número de dias trabalhados em um mês         \n");
    printf ("     e mostrar o salário de um funcionário            \n");
    printf ("=======================================================\n");
    printf ("\n");
    // 8 horas por dia, R$25,00 a hora
    printf("Quantos dias trabalhados? ");
    scanf ("%d", &D);
    Sal = D * (8 * 25);
    printf ("\n");
    printf ("%d dias trabalhados\n", D);
    printf ("O salário total será de R$%6.2f", Sal);
    printf ("\n");

    return 0;
}
