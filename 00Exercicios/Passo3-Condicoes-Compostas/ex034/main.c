#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float Peso, Altura, IMC;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("             EXERCÍCIO 34                     \n");
    printf (" Calcular o IMC da pessoa e dizer sua situação corporal");
    printf ("=======================================================\n");
    printf("\n");
    printf ("PESO: ");
    scanf ("%f", &Peso);
    printf ("ALTURA: ");
    scanf ("%f", &Altura);
    IMC = (Peso / (Altura * Altura));
    if ((IMC <= 18.5) && (IMC > 0.0)) {
        printf ("IMC: %3.1f\n", IMC);
        printf ("SITUAÇÃO: Abaixo do peso ideal!\n");
    } else if ((IMC > 18.5) && (IMC < 25.0)) {
        printf ("IMC: %3.1f\n", IMC);
        printf ("SITUAÇÃO: Peso ideal!\n");
    } else if ((IMC >= 25.0) && (IMC < 30.0)) {
        printf ("IMC: %3.1f\n", IMC);
        printf ("SITUAÇÃO: Sobrepeso\n");
    } else if ((IMC >= 30.0) && (IMC < 40.0)) {
        printf ("IMC: %3.1f\n", IMC);
        printf ("SITUAÇÃO: Obesidade\n");
    } else if ((IMC >= 40.0) && (IMC < 50.0)){
        printf ("IMC: %3.1f\n", IMC);
        printf ("SITUAÇÃO: Obesidade Mórbida\n");
    } else {
        printf ("Cálculo interrompido!\n");
        printf ("Verifique as medidas digitadas!\n");
    }
    return 0;
}
