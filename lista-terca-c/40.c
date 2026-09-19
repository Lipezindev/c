#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int ava;

    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");

    printf("Avalie de 1 a 5: ");
    scanf("%d", &ava);

  
    switch (ava)
    {
    case 1:
        printf("Nota: 1 -Muito Ruim.\n");
        break;
    case 2:
        printf("Nota: 2 - Ruim.\n");
        break;
    case 3:
        printf("Nota: 3 - Regular.\n");
        break;
    case 4:
        printf("Nota: 4 - Bom.\n");
        break;
    case 5:
        printf("Nota: 5 - Excelente.\n");
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }
    return 0;
}