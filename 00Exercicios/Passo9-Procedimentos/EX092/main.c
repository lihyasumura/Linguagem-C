#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ParOuImpar();
char R[] = "S";
int N = 0;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("                  EXERC�CIO 92                     \n");
    printf (" Crie uma l�gica que leia um n�mero inteiro e passe para\n");
    printf (" um procedimento ParOuImpar() que vai verificar e mostrar\n");
    printf ("na tela se o valor passado como par�metro � PAR ou �MPAR\n");
    printf ("=======================================================\n");
    printf("\n");
    do {
        printf ("DIGITE UM VALOR: ");
        scanf ("%d", &N);
        printf ("\n");
        ParOuImpar(N);
        printf ("\n");
        printf ("COMPARAR MAIS VALORES [ S/N ]? ");
        scanf ("%s", R);
        strupr(R);
        printf ("\n");
    } while(strcmp(R, "S") == 0);
    if (strcmp(R, "N") == 0) {
        printf ("AT� A PR�XIMA...");
    }
    printf ("\n");
    return 0;
}

void ParOuImpar(int N) {
    if (N % 2 == 0) {
        printf ("%d � um n�mero PAR\n", N);
    } else {
        printf ("%d � um n�mero �MPAR\n", N);
    }
}
