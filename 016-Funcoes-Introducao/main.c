#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void escrevaNome(); // PROT�TIPO DE FUN��O

int main()
{
    setlocale(LC_ALL, "");
    escrevaNome();
    escrevaNome();
    escrevaNome();
    return 0;
}

void escrevaNome() {
    printf ("Bem vindo a B�son Treinamentos em Tecnologia\n");
    return 0;
}
