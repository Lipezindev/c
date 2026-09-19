#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float idade, val;
    printf("Informe a sua idade: ");
    scanf("%f", &idade);

    printf("Qual o valor da compra? R$: ");
    scanf("%f", &val);

    
    if (idade >= 60 || val >= 500) {
        printf("Ganhou desconto de 10%% .\n");
    } else {
        printf("Sem desconto.\n");
    }

    val = val - (val * 0.10);
    printf("O valor final da compra é: R$ %.2f\n", val);
    return 0;
}