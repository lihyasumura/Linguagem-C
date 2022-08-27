#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int N1, N2, N3;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("             EXERCÍCIO 25 - DESAFIO                     \n");
    printf (" Ler o tamanho de três segmentos de reta e analisar seus \n");
    printf ("    comprimentos. É possível formar um triângulo?\n");
    printf ("  Matematicamente, o comprimento de cada lado deve ser \n");
    printf ("          menor que a soma dos outros dois\n");
    printf ("=======================================================\n");
    printf ("\n");
    printf("1º comprimento: ");
    scanf ("%d", &N1);
    printf ("2º comprimento: ");
    scanf ("%d", &N2);
    printf ("3º comprimento: ");
    scanf ("%d", &N3);
    printf ("\n");
    if ((N1 < N2 + N3) && (N2 < N1 + N3) && (N3 < N1 + N2)) {
        printf ("Sim, é possível formar um triângulo!\n");
    }
    if ((N1 > N2 + N3) || (N2 > N1 + N3) || (N3 > N1 + N2))  {
        printf ("Um dos lados é maior que a soma dos outros dois!\n");
        printf ("Não é possível formar um triângulo com tais medidas!\n");
    }
    return 0;
}
