#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Gerador();

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERC�CIO 86                     \n");
    printf (" Crie um programa que tenha um procedimento Gerador()\n");
    printf (" que, quando chamado, mostre a mensagem \"Ol�, Mundo!\"\n");
    printf ("         com algum componente visual (linhas).\n");
    printf ("=======================================================\n");
    printf("\n");
    Gerador();
    return 0;
}

void Gerador() {
    printf ("+-------=======-------+\n");
    printf ("     OL�, MUNDO!!!     \n");
    printf ("+-------=======-------+\n");
    printf ("\n");
}
