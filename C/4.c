#include <stdio.h>

int main(void)
{
    int idade[5];
    int i, quant = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite a idade da %do pessoa: ", i + 1);
        scanf("%d", &idade[i]);
        if (idade[i] >= 18)
    {
        quant++;
    }
    
    }

    
        printf("\n%d sao maior de idade\n", quant);

    return 0;
}
