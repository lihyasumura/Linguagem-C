#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float nota1, nota2, media;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=================================================\n");
    printf ("               EXERCÍCIO 05                      \n");
    printf ("     Ler duas notas de um aluno e calcular       \n");
    printf ("          média da dele na disciplina            \n");
    printf ("=================================================\n");
    printf ("\n");
    printf ("Digite a 1ª nota: ");
    scanf ("%f", &nota1);
    printf ("Digite a 2ª nota: ");
    scanf ("%f", &nota2);
    printf ("\n");
    media = (nota1 + nota2) / 2;
    printf ("MÉDIA: %3.1f", media);
    printf ("\n");

    return 0;
}
