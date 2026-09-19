#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int num1 = 15, num2 = 27;
    int soma = num1 + num2;

    printf("A soma dos dois números é: %d\n", soma);

    return 0;
}