#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int n, a, s;

int main()
{
    setlocale(LC_ALL, "");

    printf ("=================================================\n");
    printf ("               EXERCÍCIO 06                      \n");
    printf ("     Ler um número inteiro e mostrar seu         \n");
    printf ("          antecessor e seu sucessor              \n");
    printf ("=================================================\n");
    printf("Digite um número: ");
    scanf ("%d", &n);
    a = n - 1;
    s = n + 1;
    printf ("\n");
    printf ("O antecessor do número %d é %d\n", n, a);
    printf ("E o sucessor de %d é %d", n, s);
    printf ("\n");

    return 0;
}
