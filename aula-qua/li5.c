#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int i;
    float med,alu1 ;
    float nota = 0;

   for (i = 1; i <= 5; i++)
    {
        printf("\nDigite a %dº nota: ", i);
        scanf("%f", &alu1);
        nota+=alu1;
}
med = nota / 5;
printf("A média do aluno é %.2f", med);

 
        if (med >= 7)
        {
            printf("\nAprovado");
        }else if (med >= 5 && med < 7)
        {
            printf("\nRecuperacao");
        }
            else
        {
            printf("\nReprovado");
        }
    return 0;
}