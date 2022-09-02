#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void Gerador(), B1(), B2(), B3();
int B, N;
char C[] = "!APRENDENDO LINGUAGEM C!\n", R[] = "S";

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERCÍCIO 89-2                     \n");
    printf ("          Ex: Uma chamada válida seria\n");
    printf ("    Gerador(\"APRENDENDO LINGUAGEM C\", 3, 2)\n");
    printf ("=======================================================\n");
    printf("\n");
    do {
        printf ("ESCOLHA UMA BORDA: \n");
        printf ("BORDA 1: +--------========--------+\n");
        printf ("BORDA 2:  ~~~~~~~~::::::::~~~~~~~~\n");
        printf ("BORDA 3:  <<<<<<<<-------->>>>>>>>\n");
        scanf ("%d", &B);
        printf ("QUANTAS VEZES QUER QUE A FRASE REPITA? ");
        scanf ("%d", &N);
        printf ("\n");
        Gerador(C, N, B);
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

// ======================= BORDA 1 =======================
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

// ======================= BORDA 2 ======================
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

// ======================= BORDA 3 ======================
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

// ====================== GERADOR =======================
void Gerador(char T[], int N, int N1) {
int i = 0;
    if (N1 == 1) {
        B1();
        for (i = 0; i < N; i++) {
            printf ("%s", T);
        }
        B1();
    }
    if (N1 == 2) {
        B2();
        for (i = 0; i < N; i++) {
            printf ("%s", T);
        }
        B2();
    }
    if (N1 == 3) {
        B3();
        for (i = 0; i < N; i++) {
            printf ("%s", T);
        }
        B3();
    }
}
