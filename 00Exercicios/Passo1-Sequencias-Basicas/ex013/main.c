#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float sal, Nsal;
int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("                EXERC�CIO 13                          \n");
    printf ("    Ler o sal�rio de um funcion�rio e calcular        \n");
    printf ("      o novo sal�rio com 15\% de aumento              \n");
    printf ("=======================================================\n");
    printf ("\n");
    printf("SAL�RIO? R$");
    scanf ("%f", &sal);
    Nsal = sal + ((sal * 15) / 100);
    printf ("\n");
    printf ("Seu novo sal�rio ser� R$%6.2f", Nsal);
    printf ("\n");
    return 0;
}
