#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char R[] = "S";
int N, Soma, Menor, Par;
float c = 1.0, Media;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERC�CIO 63                     \n");
    printf ("Leia v�rios n�meros e a cada la�o pergunte se o usu�rio\n");
    printf ("      quer continuar ou n�o. No final, mostre: \n");
    printf ("a) O somat�rio entre todos os valores;\n");
    printf ("b) Qual foi o menor valor digitado;\n");
    printf ("c) A m�dia entre todos os valores;\n");
    printf ("d) Quantos valores s�o pares.\n");
    printf ("=======================================================\n");
    printf("\n");
    do {
        printf ("Digite o %.0fo. valor: ", c);
        scanf ("%d", &N);
        Soma = Soma + N;
        Media = Soma / c;
        if ((N < Menor) || (Menor == 0)) {
            Menor = N;
        }
        if (N % 2 == 0) {
            Par = Par + 1;
        }
        printf ("CONTINUAR [S/N]? ");
        scanf ("%s", R);
        strupr(R);
        printf ("\n");
        c++;
    } while (strcmp(R, "S") == 0);
    printf ("\nSOMA DE TODOS OS VALORES: %d\n", Soma);
    printf ("MENOR VALOR DIGITADO: %d\n", Menor);
    printf ("M�DIA ENTRE OS VALORES: %4.1f\n", Media);
    printf ("VALORES PARES: %d\n", Par);
    return 0;
}
