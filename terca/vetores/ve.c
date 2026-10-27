#include "stdio.h"

int main(void){
    float notas[5];
    float soma = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    printf("Resultado soma: %.2f", soma);

    return 0;

}