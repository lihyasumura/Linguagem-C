#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, media;
    printf ("Digite a primeira nota: ");
    scanf ("%f", &n1);
    printf ("Digite a segunda nota: ");
    scanf ("%f", &n2);
    media = (n1 + n2) / 2.0;
    if (media >= 7.0) {
        printf ("\nAluno aprovado!\n");
    }
    else {
        if (media >= 5.0) {
            printf ("\nAluno em recuperacao!\n");
        }
        else {
            printf ("\nAluno reprovado...\n");
        }
    return 0;
    }
}
