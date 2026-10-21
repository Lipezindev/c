#include <stdio.h>

int main (void){
    int num[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("DIGITE O %do: ", i+1);
        scanf("%d", &num[i]);
    }
    printf("\nValores na ordem inversa:\n");
    for (i = 4; i >= 0; i--)
    {
        
        printf("\n%d\n", num[i]);
    }
    
    
    
    return 0;
}