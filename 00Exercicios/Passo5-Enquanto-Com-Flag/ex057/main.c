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
    printf ("                  EXERC�CIO 57                     \n");
    printf ("  Desenvolva um aplicativo que leia o sal�rio e o sexo de\n");
    printf (" v�rios funcion�rios. No final, mostre o total de sal�rios\n");
    printf ("pagos aos homens e o total pago �s mulheres. O programa vai\n");
    printf (" perguntar ao usu�rio se ele quer continuar ou n�o sempre\n");
    printf ("          que ler os dados de um funcion�rio\n");
    printf ("=======================================================\n");
    printf("\n");
    while (strcmp(R, "S") == 0) {
        printf ("SAL�RIO: R$");
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
    printf ("\nSAL�RIO TOTAL PAGO AOS HOMENS: R$%7.2f\n", SalH);
    printf ("SAL�RIO TOTAL PAGO �S MULHERES: R$%7.2f\n", SalM);
    return 0;
}
