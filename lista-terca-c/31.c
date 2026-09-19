#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int idade;
    printf("Digite a nota: ");
    scanf("%d", &idade);

    if(idade >= 7) {
        printf("Aprovado.\n");
    } else {
        printf("Reprovado.\n");
    }
    return 0;

}