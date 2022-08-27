#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float sal, Nsal;
int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("                EXERCÍCIO 13                          \n");
    printf ("    Ler o salário de um funcionário e calcular        \n");
    printf ("      o novo salário com 15\% de aumento              \n");
    printf ("=======================================================\n");
    printf ("\n");
    printf("SALÁRIO? R$");
    scanf ("%f", &sal);
    Nsal = sal + ((sal * 15) / 100);
    printf ("\n");
    printf ("Seu novo salário será R$%6.2f", Nsal);
    printf ("\n");
    return 0;
}
