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

    for (linha = 0; linha < 2; linha++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {
            printf("%4d", num[linha][coluna]);

        }
        printf("\n");

    }

    return 0;
}