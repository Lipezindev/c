#include <stdio.h>

int main(void)
{
    int num[5];
    int pos = -1;
    int procurado = 0;

    printf("Digite 5 numeros: ");
    for (int j = 0; j < 5; j++)         
    {
        scanf("%d", &num[j]);

    }

    printf("Digite qual numero deseja procurar: ");
    scanf("%d", &procurado);

    for (int i = 0; i < 5; i++)
    {

        if (num[i] == procurado)
        {
            pos = i;
            break;
        }
    }
    if (pos != -1)
    {
        printf("Encontrado na posicao %d", pos);
    }
    else
    {
        printf("Numero nao escontrado");
    }

    return 0;
}