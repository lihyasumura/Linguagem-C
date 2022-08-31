#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

float Sal, NovoSal;
char Sexo[];
int Anos;

int main()
{
    setlocale (LC_ALL, "");

    printf ("===================================================================\n");
    printf ("             EXERC�CIO 35                     \n");
    printf (" Fa�a um programa que leia o sal�rio atual, o g�nero do funcion�rio,  \n");
    printf ("     e h� quantos anos esse funcion�rio trabalha na empresa.\n");
    printf ("      No final, mostrar o sal�rio novo baseado na tabela\n");
    // MULHERES
    // Menos de 15 anos = +5%;
    // de 15 at� 20 anos = +12%;
    // mais de 20 anos = +23%;
    // HOMENS
    // Menos de 20 anos = +3%;
    // de 20 at� 30 anos = +13%;
    // mais de 30 anos = +25%;
    printf ("====================================================================\n");
    printf("\n");
    printf ("SAL�RIO ATUAL? R$");
    scanf ("%f", &Sal);
    printf ("SEXO? ");
    scanf ("%s", Sexo);
    strupr(Sexo);
    printf ("QUANTOS ANOS DE EMPRESA? ");
    scanf ("%d", &Anos);
    printf ("\n");
    if (strcmp(Sexo, "F") == 0) {
        printf ("PARAB�NS, GUERREIRA!\n");
        if (Anos < 15) {
            NovoSal = Sal + (Sal * 5 / 100);
            printf ("NOVO SAL�RIO: R$%4.2f\n", NovoSal);
        } else if ((Anos >= 15) && (Anos <= 20)) {
            NovoSal = Sal + (Sal * 12 / 100);
            printf ("NOVO SAL�RIO: R$%4.2f\n", NovoSal);
        } else {
            NovoSal = Sal + (Sal * 23 / 100);
            printf ("NOVO SAL�RIO: R$%4.2f\n", NovoSal);
        }
    } else if (strcmp(Sexo, "M") == 0) {
        printf ("PARAB�NS, GUERREIRO!\n");
        if (Anos < 20) {
            NovoSal = Sal + (Sal * 3 / 100);
            printf ("NOVO SAL�RIO: R$%4.2f\n", NovoSal);
        } else if ((Anos >= 20) && (Anos <= 30)) {
            NovoSal = Sal + (Sal * 13 / 100);
            printf ("NOVO SAL�RIO: R$%4.2f\n", NovoSal);
        } else {
            NovoSal = Sal + (Sal * 25 / 100);
            printf ("NOVO SAL�RIO: R$%4.2f\n", NovoSal);
        }
    }
    printf ("\n");
    return 0;
}
