#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int jogo;
    printf("Escolha (1-3): \n");
    printf("1 - Jogar\n");
    printf("2 - Configurações\n");
    printf("3 - Sair\n");
    scanf("%d", &jogo);

    switch (jogo)
    {
    case 1:
        printf("Jogo iniciado 1.\n");
        break;
    case 2:
        printf("Configurações aberta 2.\n");
        break;
    case 3:
        printf("Saindo 3.\n");
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }
    return 0;
}