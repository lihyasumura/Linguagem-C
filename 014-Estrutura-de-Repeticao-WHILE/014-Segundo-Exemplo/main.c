#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador;
    float nota, media, total;
    total = 0;
    contador = 1;

    while (contador <= 4) {
        printf ("Digite a nota: ");
        scanf ("%f", &nota);
        total = total + nota;
        contador++;
    }
    media = total / 4;
    printf ("\nNota media: %.2f\n", media);
    return 0;
}
