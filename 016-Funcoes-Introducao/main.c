#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void escrevaNome(); // PROTÓTIPO DE FUNÇÃO

int main()
{
    setlocale(LC_ALL, "");
    escrevaNome();
    escrevaNome();
    escrevaNome();
    return 0;
}

void escrevaNome() {
    printf ("Bem vindo a Bóson Treinamentos em Tecnologia\n");
    return 0;
}
