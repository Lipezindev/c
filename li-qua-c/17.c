#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{

    system("chcp 65001 > nul");
    float vr1, vr2, res;
    int cal;

    printf("\n=== calculadora ===\n");
    printf("\n1 - Somar");
    printf("\n2 - Subtrair");
    printf("\n3 - Multiplicar");
    printf("\n4 - Dividir");

    printf("\nDigite a operação que deseja realizar:\n");
    scanf("%d", &cal);

    printf("\nDigite o primeiro número que deseja calcular:\n");
    scanf("%f", &vr1);
    
    printf("Digite o segundo número que deseja calcular:\n");
    scanf("%f", &vr2);

    switch (cal)
    {

    case 1:
        res = vr1 + vr2;
        printf("\nO resultado da soma é: %.2f", res);
        break;

    case 2:
        res = vr1 - vr2;
        printf("\nO resultado da subtração é: %.2f", res);
        break;

    case 3:
        res = vr1 * vr2;
        printf("\nO resultado da multiplicação é: %.2f", res);
        break;

   case 4:
        if (vr2 != 0)
        {
            res = vr1 / vr2;
            printf("\nO resultado da divisão é: %.2f", res);
        }
        else
        {
            printf("\nNão é possível dividir por zero.");
        }
        break;

    default:
        printf("\nOpção inválida.\n");
        break;
    }

    return 0;
}
