#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char nome[];
float sal;

int main()
{
    setlocale(LC_ALL, "");

    printf ("=================================================\n");
    printf ("               EXERCÍCIO 03                      \n");
    printf ("  Ler o nome e o salário de um funcionário e no  \n");
    printf ("final mostrar uma mensagem com o nome e o salário\n");
    printf ("=================================================\n");
    printf ("*****************************************************\n");
    printf ("       NOME DO FUNCIONÁRIO E SEU SALÁRIO       \n");
    printf ("*****************************************************\n");
    printf ("\n");
    printf("NOME: ");
    scanf ("%s", &nome);
    printf ("SALÁRIO: R$");
    scanf ("%f", &sal);
    printf ("\n");
    printf ("O funcionário %s teve um salário de R$%6.2f esse mês!\n", nome, sal);
    printf ("\n");

    return 0;
}
