#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char nome[];
float N1, N2, Media;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("                EXERC�CIO 19                          \n");
    printf (" Ler o nome e as duas notas de um aluno. Calcular a sua\n");
    printf ("m�dia e mostrar na tela. Analisar se teve um bom aproveitamento\n");
    printf ("=======================================================\n");
    printf ("\n");
    printf("NOME: ");
    scanf ("%s", &nome);
    printf ("1� nota: ");
    scanf ("%f", &N1);
    printf ("2� nota: ");
    scanf ("%f", &N2);
    printf ("\n");
    Media = (N1 + N2) / 2;
    printf ("ALUNO: %s\n", nome);
    printf ("M�DIA: %3.1f\n", Media);
    printf ("APROVEITAMENTO: ");

    if (Media < 5.0) {
        printf ("BAIXO\n");
    }
    if ((Media > 5.0) && (Media < 7.0)) {
        printf ("M�DIO\n");
    }
    if (Media > 7.0) {
        printf ("ALTO\n");
    }
    return 0;
}
