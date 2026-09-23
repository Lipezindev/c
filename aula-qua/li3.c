#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int i, alu1;
    int posi = 0;

    for (i = 1; i < 9; i++)
    {
        printf("\nDigite o %dº número: ", i);
        scanf("%d", &alu1);
        if (alu1 >= 0)
        {
            posi++;
        }

    }
     printf("\nTotal de números positivos: %d", posi);

    return 0;
}