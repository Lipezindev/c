#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int liv;
    char titulo[100];

    printf(" ===== BIBLIOTECA =====;\n");
    printf("1 - Cadastrar livro\n");
    printf("2 - Consultar livro\n");
    printf("3 - Emprestar livro\n");
    printf("4 - Devolver livro\n");
    printf("5 - Sair\n");

    printf("Escolha de 1 a 5: ");
    scanf("%d", &liv);

  
    switch (liv)
    {
    case 1:
        printf("Informe o título do livro: ");
        scanf(" %s", titulo);
        printf("Livro %s cadastrado com sucesso.\n", titulo);
        break;
    case 2:
        printf("Informe o título do livro: ");
        scanf(" %s", titulo);
        printf("Livro %s consultado com sucesso.\n", titulo);
        break;
    case 3:
        printf("Informe o título do livro: ");
        scanf(" %s", titulo);
        printf("Livro %s emprestado com sucesso.\n", titulo);
        break;
    case 4:
        printf("Informe o título do livro: ");
        scanf(" %s", titulo);
        printf("Livro %s devolvido com sucesso.\n", titulo);
        break;
    case 5:
        printf("Saindo do sistema.\n");
        break;
        
    default:
        printf("Opção inválida.\n");
        break;
    }
    return 0;
}