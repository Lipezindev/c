#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int conta, num1, num2;

    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");

    printf("Digite a operação (1-4): ");
    scanf("%d", &conta);


    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);
  
    switch (conta)
    {
    case 1:
        printf("Soma de %d e %d é %d.\n", num1, num2, num1 + num2);
        break;
    case 2:
        printf("Subtração de %d e %d é %d.\n", num1, num2, num1 - num2);
        break;
    case 3:
        printf("Multiplicação de %d e %d é %d.\n", num1, num2, num1 * num2);
        break;
    case 4:
        if (num2 != 0)
        {
            printf("Divisão de %d e %d é %d.\n", num1, num2, num1 / num2);
        }
        else
        {
            printf("Erro: Divisão por zero não é permitida.\n");
        }
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }

    
    return 0;
}