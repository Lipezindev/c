#include <stdio.h>

int main(void){
    int num[10];
    int quant = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0)
        {
            quant++;
        }


    }
    printf("Quantidade de pares: %d", quant);

    return 0;
}