#include <stdio.h>

int main(void)
{

    int num[2][2];
    int linha;
    int coluna;
    int soma = 0;

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
                printf("\n");

        for (coluna = 0; coluna < 2; coluna++)
        {
            printf("%4d", num[linha][coluna]);
            if (num[linha][coluna] % 2 == 0)
            {
                soma++;
            }
            
        }
        printf("\n");

    }
    printf("\nQuantidade de numeros pares encontrado: %d\n", soma);
    return 0;
}