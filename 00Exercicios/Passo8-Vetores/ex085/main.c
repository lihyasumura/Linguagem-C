#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char Nome[5][15], Sexo[5][2];
float Sal[5];
int c = 0;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERC�CIO 85                     \n");
    printf (" Fa�a um algoritmo que leia o nome, o sexo e o sal�rio\n");
    printf (" de 5 funcion�rios e guarde esses dados em tr�s vetores.\n");
    printf (" No final, mostre uma listagem contendo apenas os dados\n");
    printf ("  das funcion�rias mulheres que ganham mais de R$5 mil.\n");
    printf ("=======================================================\n");
    printf("\n");
    for (c = 0; c < 5; c++) {
        printf ("NOME: ");
        scanf("%s", Nome[c]);
        strupr(Nome[c]);
        printf ("SEXO [M/F]: ");
        scanf("%s", Sexo[c]);
        strupr(Sexo[c]);
        printf ("SAL�RIO: R$");
        scanf ("%f", &Sal[c]);
        printf ("\n");
    }
    printf ("MULHERES QUE GANHAM MAIS DE R$5000,00: \n\n");
    for (c = 0; c < 5; c++) {
        if ((strcmp(Sexo[c], "F") == 0) && (Sal[c] > 5000)) {
            printf ("NOME: %s\n", Nome[c]);
            printf ("SAL�RIO: R$%6.2f\n\n", Sal[c]);
        }
    }
    return 0;
}
