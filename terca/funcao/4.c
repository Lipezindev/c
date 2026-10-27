#include "stdio.h"

int dobro(int num){
    return num * 2;
}

int main (void){
    int resd, a;
    printf("Digite um numero: ");
    scanf("%d", &a);
    resd = dobro(a);
  
    printf("O dobro de %d: %d\n", a, resd);
  
    return 0;
}