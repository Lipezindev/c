#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int totalseg = 3675, segundos;

    segundos = totalseg % 60;

    printf("O tempo restante em segundos é: 00:00:%d\n", segundos);

    return 0;
}   