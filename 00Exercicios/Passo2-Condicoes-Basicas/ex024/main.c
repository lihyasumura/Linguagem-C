#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float distancia, preco;

int main()
{
    setlocale(LC_ALL, "");

    printf ("=======================================================\n");
    printf ("                EXERC�CIO 24                          \n");
    printf (" Perguntar a dist�ncia que um passageiro deseja percorrer \n");
    printf ("  R$0,50/km at� 200km e R$0,45 para viagens mais longas\n");
    printf ("=======================================================\n");
    printf ("\n");
    printf("DIST�NCIA DA VIAGEM: ");
    scanf ("%f", &distancia);
    printf ("\n");
    if (distancia <= 200) {
        preco = distancia * 0.50;
        printf ("VALOR TOTAL: R$%6.2f\n", preco);
    }
    if (distancia > 200) {
        preco = distancia * 0.45;
        printf ("VALOR TOTAL: R$%6.2f\n", preco);
    }
    return 0;
}
