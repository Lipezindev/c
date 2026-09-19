#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("O primeiro número é maior.\n");
    } else if (num1 < num2) {
        printf("O segundo número é maior.\n");
    } else  
    {
        printf("Os números são iguais.\n");
    }

    return 0;
}