#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float n, d, t;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=================================================\n");
    printf ("               EXERC�CIO 07                      \n");
    printf ("     Ler um n�mero real e mostrar na tela        \n");
    printf ("         o seu dobro e a sua ter�a parte         \n");
    printf ("=================================================\n");
    printf ("\n");
    printf("Digite um n�mero real: ");
    scanf ("%f", &n);
    d = n * 2;
    t = n / 3;
    printf ("\n");
    printf ("O dobro de %4.2f � %4.2f\n", n, d);
    printf ("E sua ter�a parte � %4.2f\n", t);

    return 0;
}
