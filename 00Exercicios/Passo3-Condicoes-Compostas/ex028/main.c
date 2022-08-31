#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float L, C, Area;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("             EXERCÍCIO 28                     \n");
    printf (" Ler a largura e o comprimento de um terreno retangular\n");
    printf ("  e calcular a sua área em metros quadrados e mostrar \n");
    printf ("  a classificação do terreno, POPULAR, MASTER ou VIP\n");
    // Abaixo de 100m2 = TERRENO POPULAR;
    // Entre 100m2 e 500m2 = TERRENO MASTER;
    // Acima de 500m2 = TERRENO VIP;
    printf ("=======================================================\n");
    printf("\n");
    printf("Largura: ");
    scanf ("%f", &L);
    printf ("COMPRIMENTO: ");
    scanf ("%f", &C);
    printf ("\n");
    Area = C * L;
    printf ("ÁREA: %4.1f\n", Area);
    printf ("CLASSIFICAÇÃO: ");
    if (Area < 100) {
        printf ("TERRENO POPULAR\n");
    } else if ((Area > 99) && (Area < 501)) {
        printf ("TERRENO MASTER\n");
    } else {
        printf ("TERRENO VIP\n");
    }
    return 0;
}
