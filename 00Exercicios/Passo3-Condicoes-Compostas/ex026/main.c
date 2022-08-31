#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int N1, N2;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("             EXERCÍCIO 26                     \n");
    printf (" Ler dois números inteiros  e comparar quais dos dois\n");
    printf ("     é maior ou se são iguais. Mostrar o resultado    \n");
    printf ("=======================================================\n");
    printf("\n");
    printf ("Digite o 1º número: ");
    scanf ("%d", &N1);
    printf ("Digite o 2º número: ");
    scanf ("%d", &N2);
    printf ("\n");
    if (N1 > N2) {
        printf ("O número %d é maior que %d\n", N1, N2);
    } else if (N1 < N2) {
        printf ("O número %d é maior que %d\n", N2, N1);
    } else {
        printf ("Os dois números são iguais\n");
    }
    return 0;
}
