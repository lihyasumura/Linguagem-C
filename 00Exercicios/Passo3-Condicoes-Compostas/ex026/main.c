#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int N1, N2;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("             EXERC�CIO 26                     \n");
    printf (" Ler dois n�meros inteiros  e comparar quais dos dois\n");
    printf ("     � maior ou se s�o iguais. Mostrar o resultado    \n");
    printf ("=======================================================\n");
    printf("\n");
    printf ("Digite o 1� n�mero: ");
    scanf ("%d", &N1);
    printf ("Digite o 2� n�mero: ");
    scanf ("%d", &N2);
    printf ("\n");
    if (N1 > N2) {
        printf ("O n�mero %d � maior que %d\n", N1, N2);
    } else if (N1 < N2) {
        printf ("O n�mero %d � maior que %d\n", N2, N1);
    } else {
        printf ("Os dois n�meros s�o iguais\n");
    }
    return 0;
}
