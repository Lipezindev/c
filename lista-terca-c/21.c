#include <stdio.h>
#include <stdlib.h>
#include <windows.h>    

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    char nome;
    printf("Digite a inicial do seu nome: ");   
    scanf("%c", &nome);

    printf("A Inicial do seu nome: %c\n", nome);

    return 0;
}