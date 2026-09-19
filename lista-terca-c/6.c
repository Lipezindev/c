#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int quantidade  = 4;
    float preco = 12.50;
    float total = quantidade * preco;

    printf("O total da compra é: %.2f\n", total);

    return 0;
}