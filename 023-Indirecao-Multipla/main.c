#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");

    int a = 40;
    int *pont1;
    int **pont2;
    pont1 = &a;
    pont2 = &pont1;

    printf ("O endere�o da vari�vel a �: %p\n", &a);
    printf ("O endere�o do ponteiro pont1 �: %p\n", &pont1);
    printf ("O endere�o do ponteiro pont2 �: %p\n", &pont2);
    printf ("O endere�o apontado por pont1 �: %p\n", pont1);
    printf ("O endere�o apontado por pont2 �: %p\n", pont2);
    printf ("E o valor armazenado em a �: %d\n", **pont2);

    return 0;
}
