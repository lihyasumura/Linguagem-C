#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int c = 0, Acima = 0;
float Notas[9], Soma = 0.0, Media = 0.0, Maior = 0;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 82                     \n");
    printf (" Ler a nota de 10 alunos de uma turma e guardar em um\n");
    printf ("               vetor. No final, mostre:\n");
    printf ("a) Qual é a média da turma;\n");
    printf ("b) Quantos alunos estão acima da média;\n");
    printf ("c) Qual foi a maior nota digitada;\n");
    printf ("d) Em que posições a maior nota aparece.\n");
    printf ("=======================================================\n");
    printf("\n");
    for (c = 0; c < 10; c++) {
        printf ("%dª NOTA: ", c + 1);
        scanf ("%f", &Notas[c]);
        Soma = Soma + Notas[c];
        Media = Soma / 10.0;
        if (Notas[c] > Maior) {
            Maior = Notas[c];
        }
    }
    for (c = 0; c < 10; c++) {
        if (Notas[c] > Media) {
            Acima = Acima + 1;
        }
    }
    printf ("\nMÉDIA DA TURMA: %3.1f\n", Media);
    printf ("ALUNOS ACIMA DA MÉDIA: %2d\n", Acima);
    printf ("MAIOR NOTA: %3.1f\n", Maior);
    printf ("MAIOR NOTA NOS ÍNDICES: \n");
    for (c = 0; c < 10; c++) {
        if ( Notas[c] == Maior) {
            printf ("[ %2d ]", c);
        }
    }
    printf ("\n");
    return 0;
}
