#include <stdio.h>

int main (void){
    int num[10];
    int i, cont;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &num[i]);
        cont++;
    }
    printf("\nNumeros digitados: %d\n", cont);
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", num[i]);
    }
    

    return 0;
}