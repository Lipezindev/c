#include "stdio.h"

int main (void){
    int num [5] = {12, 7, 25, 3, 18};
    int menor = num[0];
    int maior = num[0];

    for (int i = 0; i < 5; i++)
    {
        if (num[i] < menor)
        {
            menor = num[i];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (num[i] > maior)
        {
            maior = num[i];
        }
    }
    printf("Maior numero no vetor %d\n", maior);
    printf("Menor numero no vetor %d\n", menor);

    return 0;
}