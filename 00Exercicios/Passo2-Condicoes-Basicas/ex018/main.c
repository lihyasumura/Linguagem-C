#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Ano, AnoAtual, Idade;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("                EXERC�CIO 18                          \n");
    printf ("  Ler o ano de nascimento de uma pessoa, calcular a   \n");
    printf ("idade e mostrar se ela pode ou n�o dar seu voto eleitoral\n");
    printf ("=======================================================\n");
    printf ("\n");
    printf("ANO DE NASCIMENTO: ");
    scanf ("%d", &Ano);
    AnoAtual = 2022;
    Idade = AnoAtual - Ano;
    printf ("\n");
    if (Idade < 16) {
        printf ("Voc� tem %d anos de idade\n", Idade);
        printf ("AGUARDE AT� COMPLETAR 16 ANOS...");
    }
    if ((Idade > 16) && (Idade < 18)) {
        printf ("Voc� tem %d anos de idade\n", Idade);
        printf ("VOTO OPCIONAL!");
    }
    if ((Idade >= 18) && (Idade < 70)) {
        printf ("Voc� tem %d anos de idade\n", Idade);
        printf ("VOTA��O OBRIGAT�RIA!");
    }
    if (Idade > 70) {
            printf ("Voc� tem %d anos de idade\n", Idade);
            printf ("VOTO OPCIONAL!");
        }

    printf ("\n");
    return 0;
}
