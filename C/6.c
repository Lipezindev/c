#include <stdio.h>

int main(void)
{
    int valor[6];
    int num;
    int quan = 0;
    int i;

    for (i = 0; i < 6; i++)
    {
        printf("Quais numeros estao no vetor? %do NUMERO:", i + 1);
        scanf("%d", &valor[i]);
    }

    printf("Qual numero deseja procurar no vetor? ");
    scanf("%d", &num);
    for (i = 0; i < 6; i++)
    {
        if (num == valor[i])
        {
            printf("Numero encontrado na posicao %d.\n", i);
            quan++;
        }
    }

    if (quan == 0)
    {
        printf("Numero nao encontrato\n");
    }
    else
    {
        printf("\nQuantidade de numero encontrados: %d\n", quan);
    }

    return 0;
}
