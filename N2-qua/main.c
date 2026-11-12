// Filipe Gonçalves dos Santos
// Filipe Guilherme Alves dos Santos
// Ismael Batista da Silva
// Julio Cesar

#include <stdio.h>

int main(void)
{

    int assentos[3][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}};
    int linha;
    int coluna;
    int menu;
    // if para ver se tem valor ou n
    int reserva = 0;
    // int consultar;

    // float preco[3]; // if para ver se é difetente de 0

    do
    {
        printf("\n=======================================\n");
        printf("             ABSOLUTE CINEMA             \n");
        printf("=========================================\n");
        printf("1 - Mostrar mapa de assentos\n");
        printf("2 - Reservar assento\n");
        printf("3 - Cancelar reserva\n");
        printf("4 - Mostrar resumo das sessoes\n");
        printf("0 - Encerrar\n");
        printf("Digite qual opcao quer escolher: ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            printf("Assentos    1   2   3   4   5\n");

            for (linha = 0; linha < 3; linha++)
            {
                printf("Sessao  %d: ", linha + 1);
                for (coluna = 0; coluna < 5; coluna++)
                {

                    printf("%4d", assentos[linha][coluna]);
                }
                printf("\n");
            }

            break;
        case 2:

            printf("Em qual sessao quer reservar o assento: ");
            scanf("%d", &linha);

            printf("Quer sentar em qual banco rsrs: ");
            scanf("%d", &coluna);

            if (linha >= 1 && linha <= 3 &&
                coluna >= 1 && coluna <= 5)
            {
                if (assentos[linha - 1][coluna - 1] == 0)
                {
                    assentos[linha - 1][coluna - 1] = 1;
                    printf("Reserva realizada com sucesso!\n");
                }
                else
                {
                    printf("Esse assento ja esta reservado!\n");
                    continue;
                }
            }
            else
            {
                printf("Sessao ou assento invalido!\n");
            }
            reserva++;

            break;

            break;
        case 3:

            printf("Em qual assento deseja cancelar a reserva: ");
            scanf("%d", &linha);

            printf("Em qual sessao deseja cancelar a reserva: ");
            scanf("%d", &coluna);

            if (linha >= 1 && linha <= 3 &&
                coluna >= 1 && coluna <= 5)
            {
                if (assentos[linha - 1][coluna - 1] == 1)
                {
                    assentos[linha - 1][coluna - 1] = 0;
                    printf("Reserva cancelada com sucesso!\n");
                }
                else
                {
                    printf("Esse assento ja esta vazio!\n");
                    continue;
                }
            }
            else
            {
                printf("Sessao ou assento invalido!\n");
            }
            reserva--;
        case 4:
            /* code */
            break;
        case 0:
            /* code */
            break;

        default:
            break;
        }
    } while (menu != 0);

    return 0;
}
