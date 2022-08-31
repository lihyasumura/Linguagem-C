#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i, f, p, c = 0;

int main()
{
    setlocale (LC_ALL, "");
    printf ("=======================================================\n");
    printf ("             EXERCÍCIO 45                     \n");
    printf ("   O programa do exercício 44 vai ter um problema quando\n");
    printf ("  digitarmos o primeiro valor maior que o último. Resolva\n");
    printf ("esse problema com um código que funcione em qualquer situação\n");
    printf ("=======================================================\n");
    printf("\n");
    printf ("INÍCIO: ");
    scanf ("%d", &i);
    printf ("FIM: ");
    scanf ("%d", &f);
    printf ("PASSO: ");
    scanf ("%d", &p);
    printf ("\n");
    if (i < f) {
        while (i < f) {
            if ((c % 5 == 0) && (c != 0)) {
                printf ("\n");
            }
            c++;
            printf ("[ %3d ]", i);
            i = i + p;
            if (i >= f) {
                printf ("[ %3d ]\n", f);
            }
        }
    } else if (i > f) {
        while (i > f) {
            if ((c % 5 == 0) && (c != 0)) {
                printf ("\n");
            }
            c++;
            printf ("[ %3d ]", i);
            i = i - p;
            if (i <= f) {
                printf ("[ %3d ]\n", f);
            }
        }
    }
    return 0;
}
