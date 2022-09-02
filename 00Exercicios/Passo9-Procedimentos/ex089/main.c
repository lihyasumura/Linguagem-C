#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void Gerador(), B1(), B2(), B3();
int B;
char C[] = "!APRENDENDO LINGUAGEM C!\n", R[] = "S";

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 89                     \n");
    printf (" Crie um programa que melhore o procedimento Gerador()\n");
    printf ("     da questão anterior para que o usuário possa\n");
    printf ("             escolher uma entre três bordas:\n");
    printf ("           +--------========--------+ BORDA 1\n");
    printf ("            ~~~~~~~~::::::::~~~~~~~~ BORDA 2\n");
    printf ("            <<<<<<<<-------->>>>>>>> BORDA 3\n");
    printf ("=======================================================\n");
    printf("\n");
    do {
        printf ("ESCOLHA UMA BORDA: \n");
        printf ("BORDA 1: +--------========--------+\n");
        printf ("BORDA 2:  ~~~~~~~~::::::::~~~~~~~~\n");
        printf ("BORDA 3:  <<<<<<<<-------->>>>>>>>\n");
        scanf ("%d", &B);
        printf ("\n");
        switch (B) {
        case 1:
            B1();
            Gerador(C, 3);
            B1();
        break;
        case 2:
            B2();
            Gerador(C, 3);
            B2();
        break;
        case 3:
            B3();
            Gerador(C, 3);
            B3();
        break;
        }
        printf ("\n\nVER OUTRA BORDA[ S/N ]? ");
        scanf ("%s", R);
        printf ("\n");
        strupr(R);
    } while (strcmp(R, "S") == 0);
    if (strcmp(R, "N") == 0) {
        printf ("ATÉ A PRÓXIMA...\n");
    }
    return 0;
}

void B1() {
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
    printf("+\n");
}

void B2() {
int i = 0;
    for (i = 0; i < 8; i++) {
        printf ("~");
    }
    for (i = 0; i < 8; i++) {
        printf (":");
    }
    for (i = 0; i < 8; i++) {
        printf ("~");
    }
    printf ("\n");
}

void B3() {
int i = 0;
    for (i = 0; i < 8; i++) {
        printf ("<");
    }
    for (i = 0; i < 8; i++) {
        printf ("-");
    }
    for (i = 0; i < 8; i++) {
        printf (">");
    }
    printf ("\n");
}

void Gerador(char T[], int N) {
int i = 0;
    for (i = 0; i < N; i++) {
        printf ("%s", T);
    }
}
