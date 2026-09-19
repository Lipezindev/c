#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int quantidade  = 4;
    float preco = 25.50, tf;
    float total = quantidade * preco;
    float desconto = total * 0.10;
    tf = total - desconto;

    printf("O total da compra é: %.2f\n", total);
    printf("O desconto aplicado é: %.2f\n", desconto);
    printf("O total final é: %.2f\n", tf);

    return 0;
}