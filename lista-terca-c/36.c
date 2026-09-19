#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float num;
    printf("Informe um número: ");
    scanf("%f", &num);
    
    if (num > 0 || num < 100) {
        printf("O número está dentro do intervalo permitido.\n");
    } else {
        printf("O número está fora do intervalo permitido.\n");
    }

    return 0;
}