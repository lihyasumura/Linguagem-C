#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i, f, p, c = 0;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("             EXERCÍCIO 44                     \n");
    printf (" Ler o valor inicial da contagem, o valor final e o\n");
    printf (" incremento, mostrando em seguida todos os valores\n");
    printf ("=======================================================\n");
    printf("\n");
    printf ("INÍCIO: ");
    scanf ("%d", &i);
    printf ("FIM: ");
    scanf ("%d", &f);
    printf ("PASSO: ");
    scanf ("%d", &p);
    printf ("\n");
    while (i < f) {
        if ((c % 5 == 0) && (c != 0)){
            printf ("\n");
        }
        printf ("[ %3d ]", i);
        c++;
        i = i + p;
    }
    if ((i >= f)) {
        printf ("[ %3d ]", f);
    }
    printf ("\n\n-- ACABOU! --\n");
    return 0;
}
