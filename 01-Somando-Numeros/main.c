#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;
    printf("Soma de dois numeros\n");
    printf ("Digite o 1o. numero: ");
    scanf ("%d",&a);
    printf ("Digite o 2o. numero: ");
    scanf ("%d", &b);
    printf ("\n");
    printf ("A soma de %d com %d e %d\n", a, b, a + b);

    return 0;
}
