#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int opc;

    printf("1 - Administrador\n");
    printf("2 - Professor\n");
    printf("3 - Aluno\n");
    printf("4 - Visitante\n");

    printf("Escolha de 1 a 4: ");
    scanf("%d", &opc);

  
    switch (opc)
    {
    case 1:
        printf("Acesso ao sistema de administrador.\n");
        break;
    case 2:
        printf("Acesso ao sistema de professor.\n");
        break;
    case 3:
        printf("Acesso ao sistema de aluno.\n");
        break;
    case 4:
        printf("Bem-vindo ao sistema de visitante.\n");
        break;
    default:
        printf("Perfil inválida.\n");
        break;
    }
    return 0;
}