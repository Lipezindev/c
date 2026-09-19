#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float med1, med2;
    printf("Digite a primeira nota: ");
    scanf("%f", &med1);
    printf("Digite a segunda nota: ");
    scanf("%f", &med2);
    float soma = (med1 + med2) / 2;

    printf("A média dos dois números é: %.2f\n", soma);

    return 0;
}