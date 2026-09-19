#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int conta;

    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");

    printf("Digite a operação (1-4): ");
    scanf("%d", &conta);

  
    switch (conta)
    {
    case 1:
        printf("Soma Escolhida.\n");
        break;
    case 2:
        printf("Subtração Escolhida.\n");
        break;
    case 3:
        printf("Multiplicação Escolhida.\n");
        break;
    case 4:
        printf("Divisão Escolhida.\n");
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }
    return 0;
}