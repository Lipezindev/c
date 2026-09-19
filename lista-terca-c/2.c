#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int num1, num2;


    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro número: ");
    scanf("%d", &num2);

    printf("O primeiro número digitado foi: %d\n", num1);
    printf("O segundo número digitado foi: %d\n", num2);

    return 0;
}