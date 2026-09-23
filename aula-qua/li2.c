#include <stdio.h>

int main()
{
    int i, num;
    int soma = 0;

    for (i = 1; i <= 6; i++)
    {
        printf("\nDigite o %do numero: ", i);
        scanf("%d", &num);
        soma+=num;
}
    printf("\nSoma dos numeros: %d", soma);
  
    return 0;
}