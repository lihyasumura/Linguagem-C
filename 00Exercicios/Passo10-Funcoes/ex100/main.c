#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


float Media(float N1, float N2) {
float Med, Resultado;
    Med = (N1 + N2) / 2.0;
    printf ("M�DIA: %3.1f\n", Med);
    return Resultado;
}
float Situacao(Med) {
float Situation;
    if ((Med >= 0.0) && (Med < 5.0)) {
        printf ("REPROVADO!\n");
    } else if ((Med > 4.9) && (Med < 7.0)) {
        printf ("EM RECUPERA��O!\n");
    } else if ((Med > 6.0) && (Med < 10.1)) {
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
        printf ("SITUA��O: ");
        Situation = Situacao(Med);
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
