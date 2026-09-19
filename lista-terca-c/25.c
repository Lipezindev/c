#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float c;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);
    float f = c * 9 / 5 + 32;

    printf("A temperatura em Fahrenheit é: %.2f\n", f);

    return 0;
}   