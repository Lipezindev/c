#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int idade = 21;
    char inicial = 'F';
    float altura = 1.70;

    printf("Sua inicial, %c\n", inicial);   
    printf("Sua idade: %d\n", idade);
    printf("Sua altura: %.2f\n", altura);
    
    return 0;
}