#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{

    system("chcp 65001 > nul");
    int c, op, mo;

    printf("\n=== ELEVADOR ===\n");
    printf("\n1 - Subsolo");
    printf("\n2 - Térreo");
    printf("\n3 - 1º Andar");
    printf("\n4 - 2º Andar");
    printf("\n5 - 3º Andar");

    printf("\nO andar atual do elevador: ");
    scanf("%d", &c);
    printf("\na opção de destino escolhida pelo usuário: ");
    scanf("%f", &op);

    switch (op)
    {

    case 1:
        if (op > 1)
        {
            printf("\n1 Elevador subindo para o %dº", op);
        }
        else if (op == c)
        {
            printf("Elevador já está neste andar!");
        }
        break;

    case 2:
        if (op > 1)
        {
            printf("\n1 Elevador subindo para o %dº", op);
        }
        else if (op == c)
        {
            printf("Elevador já está neste andar!");
        }
        else if (op < c)
        {
            printf("O elevador está descendo para o %d", op);
        }

        break;

    case 3:
        if (op > 1)
        {
            printf("\n1 Elevador subindo para o %dº", op);
        }
        else if (op == c)
        {
            printf("Elevador já está neste andar!");
        }
        else if (op < c)
        {
            printf("O elevador está descendo para o %d", op);
        }

        break;

    case 4:
        if (op > 1)
        {
            printf("\n1 Elevador subindo para o %dº", op);
        }
        else if (op == c)
        {
            printf("Elevador já está neste andar!");
        }
        else if (op < c)
        {
            printf("O elevador está subindo para o %d", op);
        }
        break;
    case 5:
        if (op > 1)
        {
            printf("\n1 Elevador subindo para o %dº", op);
        }
        else if (op == c)
        {
            printf("Elevador já está neste andar!");
        }
        else if (op < c)
        {
            printf("O elevador está subindo para o %d", op);
        }
        break;

    default:
        printf("\nOpção inválida.\n");
        break;
    }

    printf("Andar atual: %d", c);
    printf("\nAndar de destino: %d", op);
    printf("\nMovimento: %d", mo);

    return 0;
}