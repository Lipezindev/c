#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if(num >= 0) {
        printf("Número positivo.\n");
    } else {
        printf("Número negativo.\n");
    }
    return 0;

}