/* Iniciando nossa jornada em C */

#include <stdio.h>
#include <stdlib.h>

/*

void main()
{
    printf ("Bem-Vindo ao Curso de Linguagem C!\n");
}

*/

void main()
{
    int num1, num2, soma;
    printf ("Digite o 1o. numero: ");
    scanf ("%d", &num1);
    printf ("Digite o 2o. numero: ");
    scanf ("%d", &num2);

    soma = num1 + num2;

    printf ("\n");
    printf ("Soma: %d\n", soma);
}
