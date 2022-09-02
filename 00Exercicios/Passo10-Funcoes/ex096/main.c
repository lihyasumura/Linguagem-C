#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char R[] = "S";
float N1, N2, Media(), Resultado;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERC�CIO 96                     \n");
    printf (" Crie um programa que tenha uma fun��o Media(), que vai\n");
    printf (" receber as 2 notas de um aluno e retornar a sua m�dia\n");
    printf ("=======================================================\n");
    printf("\n");
    do {
        printf ("1� NOTA: ");
        scanf ("%f", &N1);
        printf ("2� NOTA: ");
        scanf ("%f", &N2);
        printf ("\n");
        Resultado = Media(N1, N2);
        printf ("\nNOVO C�LCULO [ S/N ]? ");
        scanf ("%s", R);
        strupr(R);
        printf ("\n");
    } while(strcmp(R, "S") == 0);
    if (strcmp(R, "N") == 0) {
        printf ("AT� A PR�XIMA...\n");
    }
    return 0;
}

float Media(N1, N2) {
float med;
    med = (N1 + N2) / 2.0;
    printf ("A m�dia � de %3.1f\n", med);
    return Resultado;
}
