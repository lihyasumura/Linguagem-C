#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void escrevaValor();

int main() {
    setlocale(LC_ALL, "");
    //printf ("O n�mero �: %d\n", numero);
    escrevaValor();
    return 0;
}

void escrevaValor() {
    int numero = 15;
    int dobro = numero * 2;
    printf ("E o dobro �: %d\n", dobro);
}
