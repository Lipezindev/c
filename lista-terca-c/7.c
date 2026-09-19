#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float med1 = 8, med2 = 7, med3 = 9;
    float soma = (med1 + med2 + med3) / 3;

    printf("A média das três notas é: %.2f\n", soma);

    return 0;
}