#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if(idade >= 18) {
        printf("Maior de idade.\n");
    } else {
        printf("Menor de idade.\n");
    }
    return 0;

}