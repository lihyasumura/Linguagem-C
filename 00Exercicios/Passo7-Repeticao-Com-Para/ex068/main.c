#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char Sexo[] = "";
int c, SomaPF, Maior100;
float Peso, Mulher, Media, Maior;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 68                     \n");
    printf (" Ler o sexo e o peso de 8 pessoas usando a estrutura PARA.\n");
    printf ("                No final, mostre na tela: \n");
    printf ("a) Quantas mulheres foram cadastradas;\n");
    printf ("b) Quantos homens pesam mais de 100kg;\n");
    printf ("c) A média de peso entre as mulheres;\n");
    printf ("d) O maior peso entre os homens.\n");
    printf ("=======================================================\n");
    printf("\n");
    for (c = 1; c < 9; c++) {
        printf ("SEXO [M/F]? ");
        scanf ("%s", Sexo);
        strupr(Sexo);
        printf ("PESO: ");
        scanf ("%f", &Peso);
        printf ("\n");
        if (strcmp(Sexo, "F") == 0) {
            Mulher = Mulher + 1.0;
            SomaPF = SomaPF + Peso;
            Media = SomaPF / Mulher;
        }
        if ((strcmp(Sexo, "M") == 0) && (Peso > 100)) {
            Maior100 = Maior100 + 1;
        }
        if ((strcmp(Sexo, "M") == 0) && (Peso > Maior)) {
            Maior = Peso;
        }
    }
    printf ("\nMULHERES CADASTRADAS: %.0f\n", Mulher);
    printf ("HOMENS COM MAIS DE 100kg: %d\n", Maior100);
    printf ("MÉDIA DE PESO ENTRE AS MULHERES: %3.1f\n", Media);
    printf ("MAIOR PESO ENTRE OS HOMENS: %4.1f\n", Maior);
    return 0;
}
