#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int pontos = 100, mais;
    
    
    mais = pontos += 50;

    printf("O novo valor é: %d\n", mais);

    return 0;
}   