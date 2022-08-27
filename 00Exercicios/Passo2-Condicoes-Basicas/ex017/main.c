#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float Vel, Multa;
int Acima, c;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("                EXERCÍCIO 17                          \n");
    printf (" Perguntar a velocidade de um carro e exibir uma      \n");
    printf ("    mensagem dizendo que o usuário foi multado        \n");
    printf ("=======================================================\n");
    // R$5,00 a cada km acima da velocidade permitida
    printf ("\n");
    printf("VELOCIDADE DO VEÍCULO? ");
    scanf ("%f", &Vel);
    printf ("\n");
    if (Vel > 80) {
        printf ("-- MULTADO! -- \n");
        Acima = Vel - 80;
        Multa = Acima * 5;
        printf ("MULTA: R$%6.2f", Multa);
    }
    printf ("\n");

    return 0;
}
