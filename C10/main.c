#include <stdio.h>

int main(void)
{
    // MATRIZES
    int linha;
    int coluna;
    int matriz[2][3];
    matriz[0][0] = 2;
    matriz[0][1] = 4;
    matriz[0][2] = 5;
    matriz[1][0] = 7;
    matriz[1][1] = 6;
    matriz[1][2] = 1;
    matriz[1][3] = 9;

    for (linha = 0; linha < 2; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf("Valor da matriz %4d\n", matriz[linha][coluna]);
        }
        printf("\n");
    }
    

    return 0;
}