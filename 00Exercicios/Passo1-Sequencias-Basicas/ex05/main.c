#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float nota1, nota2, media;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=================================================\n");
    printf ("               EXERC�CIO 05                      \n");
    printf ("     Ler duas notas de um aluno e calcular       \n");
    printf ("          m�dia da dele na disciplina            \n");
    printf ("=================================================\n");
    printf ("\n");
    printf ("Digite a 1� nota: ");
    scanf ("%f", &nota1);
    printf ("Digite a 2� nota: ");
    scanf ("%f", &nota2);
    printf ("\n");
    media = (nota1 + nota2) / 2;
    printf ("M�DIA: %3.1f", media);
    printf ("\n");

    return 0;
}
