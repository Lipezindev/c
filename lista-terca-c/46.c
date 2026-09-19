#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float idade, acc;
    printf("Informe a sua idade: ");
    scanf("%f", &idade);

    if (idade >= 18)
    {
        printf("Qual o tipo de acesso?\n");
        printf("1 para administrador,\n");
        printf("2 para professor,\n");
        printf("3 para aluno,\n");
        scanf("%f", &acc);

        if (acc == 1)
    {
        printf("Pode entrar como administrador.\n");
    }
    else if (acc == 2)
    {
        printf("Pode entrar como professor.\n");
    }
    else if (acc == 3)
    {
        printf("Pode entrar como aluno.\n");
    }
    else
    {
        printf("Tipo de acesso inválido.\n");
    }
    }
    else
    {
        printf("Não pode entrar.\n");
    }

    return 0;
}