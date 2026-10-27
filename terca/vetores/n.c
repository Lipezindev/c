#include "stdio.h"

int main (void){
    int num [5] = {12, 7, 25, 3, 18};
    int maior = num[0];

    for (int i = 0; i < 5; i++)
    {
        if (num[i] > maior)
        {
            maior = num[i];
        }
    }
    printf("Maior numero no vetor %d", maior);

    return 0;
}