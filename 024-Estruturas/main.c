#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct livro {
    char nome [30];
    char autor [50];
    int paginas;
    float preco;
} livro1, livro2; // você pode criar quantas variáveis complexas você quiser
// livro1, livro2, livro3, etc...

// struct livro livro1;

int main()
{
    setlocale(LC_ALL, "");
    printf ("Cadastrando livro\n");
    printf ("\nDigite o nome do livro: ");
    gets(livro1.nome);
    printf ("Digite o nome do autor: ");
    gets (livro1.autor);
    printf("Digite o número de páginas do livro: ");
    scanf ("%d", &livro1.paginas);
    printf ("Entre com o preço do livro: ");
    scanf ("%f", &livro1.preco);
    livro2 = livro1;

    printf ("\nO livro 1 \"%s\" possui %d páginas e custa R$%4.2f\n", livro1.nome, livro1.paginas, livro1.preco);
    printf ("\nO livro 2 \"%s\" possui %d páginas e custa R$%4.2f\n", livro2.nome, livro2.paginas, livro2.preco);

    return 0;
}
