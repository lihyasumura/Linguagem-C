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
    printf ("                  EXERCÍCIO 63                     \n");
    printf ("Leia vários números e a cada laço pergunte se o usuário\n");
    printf ("      quer continuar ou não. No final, mostre: \n");
    printf ("a) O somatório entre todos os valores;\n");
    printf ("b) Qual foi o menor valor digitado;\n");
    printf ("c) A média entre todos os valores;\n");
    printf ("d) Quantos valores são pares.\n");
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
    printf ("MÉDIA ENTRE OS VALORES: %4.1f\n", Media);
    printf ("VALORES PARES: %d\n", Par);
    return 0;
}
