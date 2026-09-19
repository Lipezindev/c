#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float idade, tik;
    printf("Informe a sua idade: ");
    scanf("%f", &idade);

    printf("Possui ingressos? (1 para sim, 0 para não): ");
    scanf("%f", &tik);

    
    if (idade >= 18 && tik == 1) {
        printf("Pode entrar.\n");
    } else {
        printf("Não pode entrar.\n");
    }

    return 0;
}