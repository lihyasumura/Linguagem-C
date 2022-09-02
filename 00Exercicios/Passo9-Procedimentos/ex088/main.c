#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Gerador();
char C[] = "!APRENDENDO A LINGUAGEM C!\n";
void Linhas();
int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 88                     \n");
    printf (" Crie um programa que melhore o procedimento Gerador()\n");
    printf ("       da questão anterior para que mostre a\n");
    printf ("              mensagem várias vezes.\n");
    printf ("          Ex.: Gerador(\"APRENDENDO\", 4)\n");
    printf ("=======================================================\n");
    printf("\n");
    Linhas();
    Gerador(C, 4);
    Linhas();
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

void Gerador(char T[], int N) {
int i = 0;
    for (i = 0; i < N; i++) {
        printf ("%s", T);
    }
    return 0;
}
