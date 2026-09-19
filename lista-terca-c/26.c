#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float preco, pago;
    printf("Digite o preço do produto R$: ");
    scanf("%f", &preco);
    printf("Digite o valor pago R$: ");
    scanf("%f", &pago);
    float troco = pago - preco;

    printf("O troco é R$: %.2f\n", troco);

    return 0;
}