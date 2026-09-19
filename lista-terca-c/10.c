#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int numero = 17, div;
    
    div = numero % 5;

    printf("O resto da divisão é: %d\n", div);

    return 0;
}   