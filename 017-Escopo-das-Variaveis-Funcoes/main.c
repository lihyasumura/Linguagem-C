#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void escrevaValor();
int numero = 15;

int main() {
    setlocale(LC_ALL, "");
    printf ("O n�mero �: %d\n", numero);
    escrevaValor();
    return 0;
}

void escrevaValor() {
    int dobro = numero * 2;
    printf ("E o dobro �: %d\n", dobro);
}
