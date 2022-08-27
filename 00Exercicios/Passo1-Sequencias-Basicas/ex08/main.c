#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float m, dam, hm, km, dm, cm, mm;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=================================================\n");
    printf ("               EXERCÍCIO 08                      \n");
    printf ("     Ler uma distância em metros e mostrar os    \n");
    printf ("        valores relativos em outras medidas      \n");
    printf ("=================================================\n");
    printf ("\n");
    printf("Qual a distância em metros? ");
    scanf ("%f", &m);
    dam = m / 10;
    hm = m / 100;
    km = m / 1000;
    dm = m * 10;
    cm = m * 100;
    mm = m * 1000;
    printf ("\n");
    printf ("CONVERTENDO %5.2f METROS...\n", m);
    printf ("\n");
    printf ("%7.2f DECÂMETROS\n", dam);
    printf ("%7.2f HECTÔMETROS\n", hm);
    printf ("%7.2f QUILÔMETROS\n", km);
    printf ("\n");
    printf ("%10.2f DECÍMETROS\n", dm);
    printf ("%10.2f CENTÍMETROS\n", cm);
    printf ("%10.2f MILÍMETROS\n", mm);
    printf ("\n");
    return 0;
}
