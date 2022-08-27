#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char nome[];

void main()
{
    setlocale (LC_ALL, "");

    printf ("======================================\n");
    printf ("          EXERCÍCIO 02              \n");
    printf ("Ler o nome de uma pessoa e mostrar uma\n");
    printf ("   mensagem de boas-vindas para ela   \n");
    printf ("======================================\n");
    printf ("**************************************\n");
    printf ("        DANDO AS BOAS VINDAS          \n");
    printf ("**************************************\n");
    printf ("\n");
    printf ("Qual o seu nome? ");
    scanf ("%s", &nome);
    printf ("\n");
    printf ("Olá %s, é um prazer te conhecer!", nome);
    printf ("\n");

    return 0;
}
