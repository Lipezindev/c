#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float nota, fre;
    printf("Informe a sua nota: ");
    scanf("%f", &nota);

    if (nota >= 7.0)
    {
        printf("Informe a sua frequência: ");
        scanf("%f", &fre);

        if (fre >= 75.0)
        {
            printf("Aprovado.\n");
        }
        else
        {
            printf("Reprovado por frequência.\n");
        }
    }
    else
    {
        printf("Reprovado por nota.\n");
    }

    return 0;
}
