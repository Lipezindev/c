#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{

    system("chcp 65001 > nul");

    int id, c, d;

    printf("Digite sua idade:");
    scanf("%d", &id);

    printf("Possui ingresso (1 - Sim, 0 - Não):");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
        printf("\nVocê possui ingresso.");
        break;
    case 0:
        printf("\nVocê não possui ingresso.");
        break;
    default:
        printf("\nOpção inválida.");
        break;
    }

    printf("\nEstá acompanhado por um responsável (1 - Sim, 0 - Não):");
    scanf("%d", &d);

    switch (d)
    {
    case 1:
        printf("\nVocê está acompanhado por um responsável.");
        break;
    case 0:
        printf("\nVocê não está acompanhado por um responsável.");
        break;
    default:
        printf("\nOpção inválida.");
        break;
    }

    if (d == 1 && c == 1 && id >= 18)
    {
        printf("\nEntrada permitida!");
    }
    else
    {
        printf("\nEntrada negada!");
    }

    return 0;
}