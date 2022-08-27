#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont;
    float nota, media, total;
    total = 0;

    for (cont = 1; cont <= 4; cont++) {
        printf ("Digite a nota: ");
        scanf ("%f", &nota);
        total = total + nota;
    }
    media = total / 4;
    printf ("\nNOTA MEDIA: %.2f\n", media);
    return 0;
}
