#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Ano, Idade, Falta, Passou;

int main()
{
    setlocale (LC_ALL, "");

    printf ("=======================================================\n");
    printf ("                EXERC�CIO 22                          \n");
    printf (" Ler o ano de nascimento de um rapaz e mostrar a sua\n");
    printf ("     situa��o em rela��o ao alismento militar        \n");
    printf ("=======================================================\n");
    // Se estiver antes dos 18 anos, mostrar quantos anos faltam para o alistamento;
    // Se j� estiver depois dos 18 anos, mostrar quantos anos j� se passaram do alistamento;
    printf ("\n");
    printf ("ANO DE NASCIMENTO? ");
    scanf ("%d", &Ano);
    Idade = 2022 - Ano;
    printf("\n");

    if (Idade < 18) {
        Falta = 18 - Idade;
        printf ("Faltam %d anos para o seu alistamento\n", Falta);
    }
    if (Idade > 18) {
        Passou = Idade - 18;
        printf ("J� se passaram %d anos desde o seu alistamento\n", Passou);
    }
    return 0;
}
