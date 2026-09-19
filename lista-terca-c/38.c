#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int dia;
    printf("Escolha (1-7): \n");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("Domingo 1.\n");
        break;
    case 2:
        printf("Segunda 2.\n");
        break;
    case 3:
        printf("Terça 3.\n");
        break;
    case 4:
        printf("Quarta 4.\n");
        break;
    case 5:
        printf("Quinta 5.\n");
        break;
    case 6:
        printf("Sexta 6.\n");
        break;
    case 7:
        printf("Sábado 7.\n");
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }
    return 0;
}