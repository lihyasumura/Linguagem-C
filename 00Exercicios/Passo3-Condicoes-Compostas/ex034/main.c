#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float Peso, Altura, IMC;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("             EXERC�CIO 34                     \n");
    printf (" Calcular o IMC da pessoa e dizer sua situa��o corporal");
    printf ("=======================================================\n");
    printf("\n");
    printf ("PESO: ");
    scanf ("%f", &Peso);
    printf ("ALTURA: ");
    scanf ("%f", &Altura);
    IMC = (Peso / (Altura * Altura));
    if ((IMC <= 18.5) && (IMC > 0.0)) {
        printf ("IMC: %3.1f\n", IMC);
        printf ("SITUA��O: Abaixo do peso ideal!\n");
    } else if ((IMC > 18.5) && (IMC < 25.0)) {
        printf ("IMC: %3.1f\n", IMC);
        printf ("SITUA��O: Peso ideal!\n");
    } else if ((IMC >= 25.0) && (IMC < 30.0)) {
        printf ("IMC: %3.1f\n", IMC);
        printf ("SITUA��O: Sobrepeso\n");
    } else if ((IMC >= 30.0) && (IMC < 40.0)) {
        printf ("IMC: %3.1f\n", IMC);
        printf ("SITUA��O: Obesidade\n");
    } else if ((IMC >= 40.0) && (IMC < 50.0)){
        printf ("IMC: %3.1f\n", IMC);
        printf ("SITUA��O: Obesidade M�rbida\n");
    } else {
        printf ("C�lculo interrompido!\n");
        printf ("Verifique as medidas digitadas!\n");
    }
    return 0;
}
