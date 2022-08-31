#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float N1, N2, M;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("             EXERCÍCIO 27                     \n");
    printf ("   Ler duas notas de um aluno e calcular a média\n");
    printf (" Mostrar se está reprovado, recuperação ou aprovado \n");
    // Até 4.9 = Reprovado;
    // Entre 5.0 e 6.9 = Recuperação;
    // 7.0 ou acima = Aprovado;
    printf ("=======================================================\n");
    printf("\n");
    printf("1ª nota: ");
    scanf ("%f", &N1);
    printf ("2ª nota: ");
    scanf ("%f", &N2);
    printf ("\n");
    M = (N1 + N2) / 2;
    printf ("MÉDIA: %3.1f\n", M);
    printf ("SITUAÇÃO: ");
    if (M < 5.0) {
        printf ("REPROVADO!\n");
    } else if ((M > 4.9) && (M < 7.0)) {
        printf ("EM RECUPERAÇÃO!\n");
    } else {
        printf ("APROVADO!\n");
    }
    return 0;
}
