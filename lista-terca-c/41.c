#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int din;

    printf("1 - Saldo\n");
    printf("2 - Depósito\n");
    printf("3 - Saque\n");
    printf("4 - Sair\n");

    printf("Avalie de 1 a 4: ");
    scanf("%d", &din);

  
    switch (din)
    {
    case 1:
        printf("Saldo: R$ 1652.37\n");
        break;
    case 2:
        printf("Digite o valor do depósito R$: ");
        break;
    case 3:
        printf("Digite o valor do saque R$: ");
        break;
    case 4:
        printf("Saindo do banco.\n");
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }
    return 0;
}