#include <stdio.h>
#include <string.h>

#define MAX_LIVROS 100

// Vetores paralelos e variáveis globais para gerenciar o acervo sem utilizar ponteiros
int codigos[MAX_LIVROS];
char titulos[MAX_LIVROS][100];
int anos[MAX_LIVROS];
int qtd_total[MAX_LIVROS];
int qtd_disponivel[MAX_LIVROS];
int total_cadastrados = 0;

// Protótipos das funções obrigatórias e auxiliares
void cadastrarLivro();
void listarLivros();
void consultarLivro();
void realizarEmprestimo();
void realizarDevolucao();
void gerarRelatorio();

int main(void) {
    int opcao;

    do {
        // Exibição do menu principal conforme o enunciado
        printf("\n========================================\n");
        printf("       SISTEMA DE BIBLIOTECA            \n");
        printf("========================================\n");
        printf("1 - Cadastrar livro\n");
        printf("2 - Listar todos os livros\n");
        printf("3 - Consultar livro por código\n");
        printf("4 - Realizar empréstimo\n");
        printf("5 - Realizar devolução\n");
        printf("6 - Relatório de estoque\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        // Estrutura condicional switch para navegar pelo menu
        switch (opcao) {
            case 1:
                cadastrarLivro();
                break;
            case 2:
                listarLivros();
                break;
            case 3:
                consultarLivro();
                break;
            case 4:
                realizarEmprestimo();
                break;
            case 5:
                realizarDevolucao();
                break;
            case 6:
                gerarRelatorio();
                break;
            case 0:
                printf("\nEncerrando o sistema da biblioteca. Até logo!\n");
                break;
            default:
                printf("\nOpção inválida! Por favor, escolha uma opção entre 0 e 6.\n");
        }
    } while (opcao != 0);

    return 0;
}

// 1. Função para cadastrar um novo livro
void cadastrarLivro() {
    if (total_cadastrados >= MAX_LIVROS) {
        printf("\nErro: Limite máximo de 100 livros cadastrados atingido!\n");
        return;
    }

    int codigoTemp;
    printf("\n--- CADASTRO DE NOVO LIVRO ---\n");
    printf("Digite o código do livro (número inteiro): ");
    scanf("%d", &codigoTemp);

    // Validação: verificar se o código já existe
    for (int i = 0; i < total_cadastrados; i++) {
        if (codigos[i] == codigoTemp) {
            printf("\nErro: Já existe um livro cadastrado com o código %d!\n", codigoTemp);
            return;
        }
    }

    codigos[total_cadastrados] = codigoTemp;

    printf("Digite o título do livro: ");
    getchar(); // Limpa o buffer do teclado antes de usar o fgets
    fgets(titulos[total_cadastrados], 100, stdin);
    
    // Remove a quebra de linha (\n) gerada pelo fgets ao capturar a string
    int j = 0;
    while (titulos[total_cadastrados][j] != '\0') {
        if (titulos[total_cadastrados][j] == '\n') {
            titulos[total_cadastrados][j] = '\0';
            break;
        }
        j++;
    }

    printf("Digite o ano de publicação: ");
    scanf("%d", &anos[total_cadastrados]);

    printf("Digite a quantidade total de exemplares: ");
    scanf("%d", &qtd_total[total_cadastrados]);

    // Validação de quantidade negativa
    if (qtd_total[total_cadastrados] < 0) {
        printf("\nErro: A quantidade total não pode ser negativa. Cadastro cancelado.\n");
        return;
    }

    // A quantidade disponível começa igual à quantidade total
    qtd_disponivel[total_cadastrados] = qtd_total[total_cadastrados];
    total_cadastrados++;

    printf("\nLivro cadastrado com sucesso!\n");
}

// 2. Função para listar todos os livros cadastrados
void listarLivros() {
    if (total_cadastrados == 0) {
        printf("\nNenhum livro cadastrado no sistema atualmente.\n");
        return;
    }

    printf("\n========================================\n");
    printf("       LISTA DE LIVROS CADASTRADOS      \n");
    printf("========================================\n");
    for (int i = 0; i < total_cadastrados; i++) {
        printf("Código: %d\n", codigos[i]);
        printf("Título: %s\n", titulos[i]);
        printf("Ano de Publicação: %d\n", anos[i]);
        printf("Quantidade Total: %d\n", qtd_total[i]);
        printf("Quantidade Disponível: %d\n", qtd_disponivel[i]);
        printf("----------------------------------------\n");
    }
}

// 3. Função para consultar livro por código
void consultarLivro() {
    if (total_cadastrados == 0) {
        printf("\nNenhum livro cadastrado no sistema.\n");
        return;
    }

    int codigoBusca;
    printf("\n--- CONSULTA DE LIVRO POR CÓDIGO ---\n");
    printf("Digite o código do livro: ");
    scanf("%d", &codigoBusca);

    int encontrado = 0;
    for (int i = 0; i < total_cadastrados; i++) {
        if (codigos[i] == codigoBusca) {
            printf("\nLivro Encontrado:\n");
            printf("Código: %d\n", codigos[i]);
            printf("Título: %s\n", titulos[i]);
            printf("Ano de Publicação: %d\n", anos[i]);
            printf("Quantidade Total: %d\n", qtd_total[i]);
            printf("Quantidade Disponível: %d\n", qtd_disponivel[i]);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("\nLivro não encontrado. Verifique o código informado.\n");
    }
}

// 4. Função para realizar empréstimo
void realizarEmprestimo() {
    if (total_cadastrados == 0) {
        printf("\nNenhum livro cadastrado no sistema.\n");
        return;
    }

    int codigoBusca;
    printf("\n--- REALIZAR EMPRÉSTIMO ---\n");
    printf("Digite o código do livro que deseja emprestar: ");
    scanf("%d", &codigoBusca);

    int encontrado = 0;
    for (int i = 0; i < total_cadastrados; i++) {
        if (codigos[i] == codigoBusca) {
            encontrado = 1;
            if (qtd_disponivel[i] > 0) {
                qtd_disponivel[i]--;
                printf("\nEmpréstimo realizado com sucesso! Exemplares disponíveis agora: %d\n", qtd_disponivel[i]);
            } else {
                printf("\nErro: Não há exemplares disponíveis no momento para este livro.\n");
            }
            break;
        }
    }

    if (!encontrado) {
        printf("\nErro: Livro não cadastrado no sistema.\n");
    }
}

// 5. Função para realizar devolução
void realizarDevolucao() {
    if (total_cadastrados == 0) {
        printf("\nNenhum livro cadastrado no sistema.\n");
        return;
    }

    int codigoBusca;
    printf("\n--- REALIZAR DEVOLUÇÃO ---\n");
    printf("Digite o código do livro que deseja devolver: ");
    scanf("%d", &codigoBusca);

    int encontrado = 0;
    for (int i = 0; i < total_cadastrados; i++) {
        if (codigos[i] == codigoBusca) {
            encontrado = 1;
            if (qtd_disponivel[i] < qtd_total[i]) {
                qtd_disponivel[i]++;
                printf("\nDevolução registrada com sucesso! Exemplares disponíveis agora: %d\n", qtd_disponivel[i]);
            } else {
                printf("\nErro: A quantidade disponível já é igual ao total de exemplares. Impossível devolver.\n");
            }
            break;
        }
    }

    if (!encontrado) {
        printf("\nErro: Livro não cadastrado no sistema.\n");
    }
}

// 6. Função para gerar relatório de estoque
void gerarRelatorio() {
    int totalExemplares = 0;
    int totalDisponiveis = 0;
    int totalEmprestados = 0;

    for (int i = 0; i < total_cadastrados; i++) {
        totalExemplares += qtd_total[i];
        totalDisponiveis += qtd_disponivel[i];
    }
    
    // O total emprestado é a diferença entre o total de exemplares e os disponíveis
    totalEmprestados = totalExemplares - totalDisponiveis;

    printf("\n========================================\n");
    printf("          RELATÓRIO DE ESTOQUE          \n");
    printf("========================================\n");
    printf("Quantidade total de livros cadastrados: %d\n", total_cadastrados);
    printf("Quantidade total de exemplares no acervo: %d\n", totalExemplares);
    printf("Quantidade total de exemplares disponíveis: %d\n", totalDisponiveis);
    printf("Quantidade total de exemplares emprestados: %d\n", totalEmprestados);
    printf("========================================\n");
}