#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


float Media(float N1, float N2) {
float Resultado;
    Resultado = (N1 + N2) / 2.0;
    printf ("MÉDIA: %3.1f\n", Resultado);
    return Resultado;
}
float Situacao(float Resultado) {
float Situation;
    printf ("SITUAÇÃO: ");
    if ((Resultado >= 0.0) && (Resultado < 5.0)) {
        printf ("REPROVADO!\n");
    } else if ((Resultado > 4.9) && (Resultado < 7.0)) {
        printf ("EM RECUPERAÇÃO!\n");
    } else if ((Resultado > 6.9) && (Resultado < 10.1)) {
        printf ("APROVADO!\n");
    } else {
        printf ("CÁLCULO INVÁLIDO!\n");
        printf ("INSIRA OS DADOS NOVAMENTE!\n");
    }
    return Situation;
}

float N1, N2, Resultado, Situation;
char R[] = "S";

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 100                     \n");
    printf ("    Melhore o exercício 96 criando além da função Media()\n");
    printf ("    uma outra função chamada Situacao() que vai retornar\n");
    printf ("    se o aluno está APROVADO, em RECUPERAÇÃO ou REPROVADO\n");
    printf ("Essa nova função vai receber como parâmetro o resultado de Media()\n");
    printf ("=======================================================\n");
    printf("\n");
    do {
        printf ("1ª NOTA: ");
        scanf ("%f", &N1);
        printf ("2ª NOTA: ");
        scanf ("%f", &N2);
        printf ("\n");
        Resultado = Media(N1, N2);
        Situation = Situacao(Resultado);
        printf ("CALCULAR NOVAMENTE [ S/N ]? ");
        scanf ("%s", R);
        strupr(R);
        printf ("\n");
    } while(strcmp(R, "S") == 0);
    if (strcmp(R, "N") == 0) {
        printf ("ATÉ A PRÓXIMA...");
    }
    printf ("\n");
    return 0;
}
