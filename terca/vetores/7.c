#include <stdio.h>

int main(void){
    int num[8] = {1, 3, 5, 2, 7, 12, 14, 65};
    int quant = 0;

    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", num[i]);
        if (num[i] % 2 == 0)
        {
            quant++;
        }

    }
    printf("Quantidade de pares: %d", quant);

    return 0;
}