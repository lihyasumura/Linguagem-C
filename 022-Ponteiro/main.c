#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int *x, valor, y;
    valor = 35;
    x = &valor; // ATRIBUINDO O ENDERE�O DE VALOR A X
    y = *x; // ATRIBUINDO O CONTE�DO DA VARI�VEL APONTADA POR X A Y

    printf ("Endere�o da vari�vel comum valor: %p\n", &valor);
    printf ("Lendo o conte�do do ponteiro x: %p\n", x);
    printf ("Endere�o da vari�vel ponteiro x: %p\n", &x);
    printf ("Conte�do da vari�vel apontada por x: %d\n", *x);
    printf ("Conte�do da vari�vel comum y: %d\n", y);

}
