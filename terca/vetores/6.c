#include "stdio.h" 
int main (void){
    int soma = 0;
    int in[] = { 1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", in[i]);
        soma+=in[i];
    }
    printf("A soma dos termos e: %d", soma);

    return 0;   
}