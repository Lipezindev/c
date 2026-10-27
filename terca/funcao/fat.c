#include "stdio.h"

int tab(int a){
    int f = 1;
    
    do
    {
       f = a * f;
       a--;
    } while (a > 1);
    return f;
    
}
int main(void){
    int res;
    int a1;

    printf("digite um numero: ");
    scanf("%d", &a1);

    res = tab(a1);
    
    printf("%d! = %d", a1, res);
    return 0;
}