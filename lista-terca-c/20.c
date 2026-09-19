#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float preco;
    printf("Digite o preço do produto R$: ");
    scanf("%f", &preco);

    printf("O preço do produto é: %.2f\n", preco);
    
    return 0;
}