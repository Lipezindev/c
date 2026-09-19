#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float idade, ing;
    printf("Informe a sua idade: ");
    scanf("%f", &idade);

    printf("Possui ingressos? (1 para sim, 0 para não): ");
    scanf("%f", &ing);

    
    if (idade >= 18) {
        if (ing == 1) {
            printf("Pode entrar.\n");
        } else {
            printf("Não pode entrar.\n");
        }
    } else {
        printf("Não pode entrar.\n");
    }

    return 0;
}