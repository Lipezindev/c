#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float altura;
    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("Sua altura é: %.2f\n", altura);
    
    return 0;
}