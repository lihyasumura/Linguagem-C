#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float n, d, t;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=================================================\n");
    printf ("               EXERCÍCIO 07                      \n");
    printf ("     Ler um número real e mostrar na tela        \n");
    printf ("         o seu dobro e a sua terça parte         \n");
    printf ("=================================================\n");
    printf ("\n");
    printf("Digite um número real: ");
    scanf ("%f", &n);
    d = n * 2;
    t = n / 3;
    printf ("\n");
    printf ("O dobro de %4.2f é %4.2f\n", n, d);
    printf ("E sua terça parte é %4.2f\n", t);

    return 0;
}
