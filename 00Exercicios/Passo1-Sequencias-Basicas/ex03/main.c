#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char nome[];
float sal;

int main()
{
    setlocale(LC_ALL, "");

    printf ("=================================================\n");
    printf ("               EXERC�CIO 03                      \n");
    printf ("  Ler o nome e o sal�rio de um funcion�rio e no  \n");
    printf ("final mostrar uma mensagem com o nome e o sal�rio\n");
    printf ("=================================================\n");
    printf ("*****************************************************\n");
    printf ("       NOME DO FUNCION�RIO E SEU SAL�RIO       \n");
    printf ("*****************************************************\n");
    printf ("\n");
    printf("NOME: ");
    scanf ("%s", &nome);
    printf ("SAL�RIO: R$");
    scanf ("%f", &sal);
    printf ("\n");
    printf ("O funcion�rio %s teve um sal�rio de R$%6.2f esse m�s!\n", nome, sal);
    printf ("\n");

    return 0;
}
