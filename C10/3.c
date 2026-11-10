#include <stdio.h>

int main(void)
{
    int matriz[3][3];

    for (int linha = 0; linha < 3; linha++)
    {
       for (int coluna= 0; coluna < 3; coluna++)
       {
        printf("Digite o valor da matriz [%d][%d]: ", linha, coluna);
        scanf("%d", &matriz[linha][coluna]);
       }
       
    }
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}