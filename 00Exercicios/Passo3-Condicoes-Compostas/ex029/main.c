#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char Nome[];
float Sal, NovoSal;
int Anos;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("             EXERC�CIO 29                     \n");
    printf ("     Ler o nome de um funcion�rio, seu sal�rio, \n");
    printf (" tempo de firma e mostrar seu novo sal�rio reajustado\n");
    // At� 3 anos de empresa = Aumento de 3%;
    // Entre 3 e 10 anos = Aumento de 12.5%;
    // 10 anos ou mais = Aumento de 20%;
    printf ("=======================================================\n");
    printf("\n");
    printf("NOME: ");
    scanf ("%s", &Nome);
    printf ("SAL�RIO: ");
    scanf ("%f", &Sal);
    printf ("TEMPO DE FIRMA: ");
    scanf ("%d", &Anos);
    printf ("\n");
    printf ("%s trabalha h� %d anos na empresa e seu sal�rio � de R$%6.2f\n", Nome, Anos, Sal);
    if (Anos < 4) {
        NovoSal = Sal + ((Sal * 3) / 100);
        printf ("O novo sal�rio de %s ser� R$%6.2f\n", Nome, NovoSal);
    } else if ((Anos > 3) && (Anos < 10)) {
        NovoSal = Sal + ((Sal * 12.5) / 100);
        printf ("O novo sal�rio de %s ser� R$%6.2f\n", Nome, NovoSal);
    } else {
        NovoSal = Sal + ((Sal * 20) / 100);
        printf ("O novo sal�rio de %s ser� R$%6.2f\n", Nome, NovoSal);
    }
    return 0;
}
