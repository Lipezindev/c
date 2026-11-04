#include <stdio.h>

int main(void)
{
    /*matriz trabalha com linhas e colunas, o indice começa em 0*/
    /*O primeiro espaço pe para as linhas o segundo para as colunas*/
    /*EX: int num [2][4] linhas = 2, colunas [4]*/
    int num[3][4] ={
        {12, 23, 34, 21}, 
        {45, 56, 67, 78},
        {14, 5, 32, 30}
        };
    printf("Primeira linha, primeira coluna: %d\n", num[0][0]);
    printf("Segunda linha, terceira coluna: %d\n", num[1][2]);
    printf("Terceira linha, quarta coluna: %d\n", num[2][1]);
    printf("Segunda linha, terceira coluna: %d\n", num[2][3]);

    return 0;
} 
