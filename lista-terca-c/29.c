#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Número negativo.\n");
    } else {
        printf("Número positivo.\n");
    }
    return 0;

}