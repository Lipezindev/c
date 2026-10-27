#include "stdio.h"

float tab(float a, float b){
    return (a + b) / 2;
}
int main(void){
    float res;
    float a1, a2;

    printf("digite um numero: ");
    scanf("%f", &a1);

    printf("digite outro numero: ");
    scanf("%f", &a2);

    res = tab(a1, a2);
    
    printf("A media: %.2f", res);
    return 0;
}