#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int i, alu1;
    int posi = 0;

    for (i = 1; i <= 50; i++)
    {
        printf("%d\n", i);
        if (i % 2 == 0)
        {
            posi++;
        }

    }
     printf("\nTotal de números pares: %d", posi);

    return 0;
}