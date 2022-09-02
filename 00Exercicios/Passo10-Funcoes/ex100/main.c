#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


float Media(float N1, float N2) {
float Resultado;
    Resultado = (N1 + N2) / 2.0;
    printf ("M�DIA: %3.1f\n", Resultado);
    return Resultado;
}
float Situacao(float Resultado) {
float Situation;
    printf ("SITUA��O: ");
    if ((Resultado >= 0.0) && (Resultado < 5.0)) {
        printf ("REPROVADO!\n");
    } else if ((Resultado > 4.9) && (Resultado < 7.0)) {
        printf ("EM RECUPERA��O!\n");
    } else if ((Resultado > 6.9) && (Resultado < 10.1)) {
        printf ("APROVADO!\n");
    } else {
        printf ("C�LCULO INV�LIDO!\n");
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
    printf ("                  EXERC�CIO 100                     \n");
    printf ("    Melhore o exerc�cio 96 criando al�m da fun��o Media()\n");
    printf ("    uma outra fun��o chamada Situacao() que vai retornar\n");
    printf ("    se o aluno est� APROVADO, em RECUPERA��O ou REPROVADO\n");
    printf ("Essa nova fun��o vai receber como par�metro o resultado de Media()\n");
    printf ("=======================================================\n");
    printf("\n");
    do {
        printf ("1� NOTA: ");
        scanf ("%f", &N1);
        printf ("2� NOTA: ");
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
        printf ("AT� A PR�XIMA...");
    }
    printf ("\n");
    return 0;
}
