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
    printf ("             EXERCÍCIO 29                     \n");
    printf ("     Ler o nome de um funcionário, seu salário, \n");
    printf (" tempo de firma e mostrar seu novo salário reajustado\n");
    // Até 3 anos de empresa = Aumento de 3%;
    // Entre 3 e 10 anos = Aumento de 12.5%;
    // 10 anos ou mais = Aumento de 20%;
    printf ("=======================================================\n");
    printf("\n");
    printf("NOME: ");
    scanf ("%s", &Nome);
    printf ("SALÁRIO: ");
    scanf ("%f", &Sal);
    printf ("TEMPO DE FIRMA: ");
    scanf ("%d", &Anos);
    printf ("\n");
    printf ("%s trabalha há %d anos na empresa e seu salário é de R$%6.2f\n", Nome, Anos, Sal);
    if (Anos < 4) {
        NovoSal = Sal + ((Sal * 3) / 100);
        printf ("O novo salário de %s será R$%6.2f\n", Nome, NovoSal);
    } else if ((Anos > 3) && (Anos < 10)) {
        NovoSal = Sal + ((Sal * 12.5) / 100);
        printf ("O novo salário de %s será R$%6.2f\n", Nome, NovoSal);
    } else {
        NovoSal = Sal + ((Sal * 20) / 100);
        printf ("O novo salário de %s será R$%6.2f\n", Nome, NovoSal);
    }
    return 0;
}
