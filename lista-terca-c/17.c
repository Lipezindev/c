#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Sua idade é: %d\n", idade);
    
    return 0;
}