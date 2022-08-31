#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float N1, N2, M;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("             EXERC�CIO 27                     \n");
    printf ("   Ler duas notas de um aluno e calcular a m�dia\n");
    printf (" Mostrar se est� reprovado, recupera��o ou aprovado \n");
    // At� 4.9 = Reprovado;
    // Entre 5.0 e 6.9 = Recupera��o;
    // 7.0 ou acima = Aprovado;
    printf ("=======================================================\n");
    printf("\n");
    printf("1� nota: ");
    scanf ("%f", &N1);
    printf ("2� nota: ");
    scanf ("%f", &N2);
    printf ("\n");
    M = (N1 + N2) / 2;
    printf ("M�DIA: %3.1f\n", M);
    printf ("SITUA��O: ");
    if (M < 5.0) {
        printf ("REPROVADO!\n");
    } else if ((M > 4.9) && (M < 7.0)) {
        printf ("EM RECUPERA��O!\n");
    } else {
        printf ("APROVADO!\n");
    }
    return 0;
}
