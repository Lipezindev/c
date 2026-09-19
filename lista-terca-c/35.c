#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float idade, tik;
    printf("Informe a sua idade: ");
    scanf("%f", &idade);

    printf("Possui documento? (1 para sim, 0 para não): ");
    scanf("%f", &tik);

    
    if (idade >= 18 && tik == 1) {
        printf("Acesso permitido.\n");
    } else {
        printf("Acesso negado.\n");
    }

    return 0;
}