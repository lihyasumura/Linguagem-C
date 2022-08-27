#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void escrevaValor();
int numero = 15;

int main() {
    setlocale(LC_ALL, "");
    printf ("O número é: %d\n", numero);
    escrevaValor();
    return 0;
}

void escrevaValor() {
    int dobro = numero * 2;
    printf ("E o dobro é: %d\n", dobro);
}
