#include <stdio.h>
#include <stdlib.h>
#include <windows.h>    

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int idade = 21;
    char nome[50] = "Filipe";
    float altura = 1.75;

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);

    return 0;
}