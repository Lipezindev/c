#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float med1, med2, med3;

    printf("Digite a primeira nota: ");
    scanf("%f", &med1);
    printf("Digite a segunda nota: ");
    scanf("%f", &med2);
    printf("Digite a terceira nota: ");
    scanf("%f", &med3); 
    float soma = (med1 + med2 + med3) / 3;
    printf("A média das três notas é: \n%.2f\n", soma);

    return 0;
}
