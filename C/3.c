#include <stdio.h> 

int main (void){
    int notas[5];
    float media;
    int i;
    int soma = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%d", &notas[i]);
        soma+=notas[i];
    }
    media = soma / 5.0f;
    printf("A media das notas e %.2f", media);

    return 0;
}