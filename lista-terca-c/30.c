#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if(num == 0) {
        printf("Esse número é zero.\n");
    } else {
        printf("Número não é zero.\n");
    }
    return 0;

}