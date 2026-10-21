#include <stdio.h>

int main (void){
    int num[6];
    int i, soma = 0;

    for (i = 0; i < 6; i++)
    {
        printf("Digite o %do: ", i+1);
        scanf("%d", &num[i]);
        soma+=num[i];

    }
    printf("A soma dos numeros e: %d", soma);
    
    
    
    return 0;
}