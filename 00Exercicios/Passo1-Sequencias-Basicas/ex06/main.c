#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int n, a, s;

int main()
{
    setlocale(LC_ALL, "");

    printf ("=================================================\n");
    printf ("               EXERC�CIO 06                      \n");
    printf ("     Ler um n�mero inteiro e mostrar seu         \n");
    printf ("          antecessor e seu sucessor              \n");
    printf ("=================================================\n");
    printf("Digite um n�mero: ");
    scanf ("%d", &n);
    a = n - 1;
    s = n + 1;
    printf ("\n");
    printf ("O antecessor do n�mero %d � %d\n", n, a);
    printf ("E o sucessor de %d � %d", n, s);
    printf ("\n");

    return 0;
}
