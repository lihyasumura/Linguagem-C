#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char R[] = "S", Sexo[];
float Sal, SalH, SalM;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 57                     \n");
    printf ("  Desenvolva um aplicativo que leia o salário e o sexo de\n");
    printf (" vários funcionários. No final, mostre o total de salários\n");
    printf ("pagos aos homens e o total pago às mulheres. O programa vai\n");
    printf (" perguntar ao usuário se ele quer continuar ou não sempre\n");
    printf ("          que ler os dados de um funcionário\n");
    printf ("=======================================================\n");
    printf("\n");
    while (strcmp(R, "S") == 0) {
        printf ("SALÁRIO: R$");
        scanf ("%f", &Sal);
        printf ("SEXO [M/F]: ");
        scanf ("%s", Sexo);
        strupr(Sexo);
        printf ("CONTINUAR [S/N]? ");
        scanf ("%s", R);
        strupr(R);
        printf ("\n");
        if (strcmp(Sexo, "M") == 0) {
            SalH = SalH + Sal;
        } else {
            SalM = SalM + Sal;
        }
    }
    printf ("\nSALÁRIO TOTAL PAGO AOS HOMENS: R$%7.2f\n", SalH);
    printf ("SALÁRIO TOTAL PAGO ÀS MULHERES: R$%7.2f\n", SalM);
    return 0;
}
