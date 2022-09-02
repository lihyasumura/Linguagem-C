#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Gerador();
void Linhas();
char C[] = "  APRENDENDO LINGUAGEM C!\n";

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 87                     \n");
    printf (" Crie um programa que melhore o procedimento Gerador()\n");
    printf ("   da questão anterior para que mostre uma mensagem\n");
    printf ("         personalizada, passada como parâmetro.\n");
    printf ("Ex: Ao chamar Gerador(\"Aprendendo Linguagem C\" aparece:\n");
    printf ("         +--------========--------+\n");
    printf ("           APRENDENDO LINGUAGEM C\n");
    printf ("         +--------========--------+\n");
    printf ("=======================================================\n");
    printf("\n");
    Linhas();
    Gerador(C);
    Linhas();
    printf ("\n");
    return 0;
}

void Linhas() {
int i = 0;
    printf ("+");
    for (i = 0; i < 8; i++) {
        printf ("-");
    }
    for (i = 0; i < 8; i++) {
        printf ("=");
    }
    for (i = 0; i < 8; i++) {
        printf ("-");
    }
    printf ("+\n");
}

void Gerador(char T[]) {
    printf ("%s", T);
    return 0;
}
