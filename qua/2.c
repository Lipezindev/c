#include <stdio.h>

int main (void){
    int num[2][3]={
        {10, 20, 30},
        {40, 50, 60}
    };
    int linha;
    int coluna;

    for (linha = 0; linha < 2; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf("%4d", num[linha][coluna]);
        }
        printf("\n");
    }
    

    return 0;
}