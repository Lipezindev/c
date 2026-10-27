#include "stdio.h"

int tab(int a, int b){
    return a - b;
}
int main(void){
    int res;
    int a1, a2;

    printf("digite um numero: ");
    scanf("%d", &a1);

    printf("digite outro numero: ");
    scanf("%d", &a2);

    res = tab(a1, a2);
    
    printf("%d - %d = %d", a1, a2, res);
    return 0;
}