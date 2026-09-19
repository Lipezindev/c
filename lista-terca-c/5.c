#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int largura = 10, altura = 5;
    int area = largura * altura;

    printf("A área dos dois números é: %d\n", area);

    return 0;
}