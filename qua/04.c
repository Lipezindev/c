#include <stdio.h>

int main(void)
{

    int num[2][2];
    int linha;
    int coluna;

    for (linha = 0; linha < 2; linha++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {
            printf("Digite o valor [%d][%d]:", linha, coluna);
            scanf("%d", &num[linha][coluna]);
        }
    }

        printf("\n");


    for (linha = 0; linha < 2; linha++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {
            printf("%4d", num[linha][coluna]);
            
        }
        printf("\n");
    }
            printf("\n");
            printf("Valores atualizados: \n");
    for (linha = 0; linha < 2; linha++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {
            num[linha][coluna] = num[linha][coluna] * 2;
            printf("%4d", num[linha][coluna]);
        }
        printf("\n");
    }
        printf("\n");

    return 0;
}