#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int conta = (10 + 5) * 2 - 8 / 4;
    int conta2 = 10 + 5 * 2 - 8 / 4;
    printf("O resultado da conta é: %d\n", conta);
    printf("O resultado da conta2 é: %d\n", conta2);
    return 0;
}