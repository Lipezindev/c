#include "stdio.h"

void maq(int a, int b)
{
    if (a > b)
    {
        printf("O numero %d e o maior", a);
    }
    else if (a < b)
    {
        printf("O numero %d e o maior", b);
    }
    else
    {
        printf("os numeros %d sao iguais", a);
    }
    return;
}
int main(void)
{

    int a1, a2;

    printf("digite um numero: ");
    scanf("%d", &a1);

    printf("digite outro numero: ");
    scanf("%d", &a2);

    maq(a1, a2);
   
    return 0;
}