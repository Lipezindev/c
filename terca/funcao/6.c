#include "stdio.h"

int tab(int a){
    return a * a;
}
int main(void){
    int res;
    int a1;

    printf("digite um numero: ");
    scanf("%d", &a1);

    res = tab(a1);
    
    printf("%d ao quadrado = %d", a1, res);
    return 0;
}