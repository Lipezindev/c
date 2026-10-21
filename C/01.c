#include <stdio.h>

int main (void){
    int num[6];
    int i;

    for (i = 0; i < 6; i++)
    {
        printf("Digite o %do: ", i+1);
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 6; i++)
    {
        printf("\nO %do NUMERO E: %d\n", i + 1, num[i]);
    }
    
    
    
    return 0;
}