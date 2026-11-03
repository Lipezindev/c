#include <stdio.h>

int main(void)
{
    int i;
    int num[5];
    int pos = -1;
    int procurado = 0;
    int ig = 0;

    for (int j = 0; j < 5; j++)
    {    
        printf("Digite o numero %d: \n", j + 1);
        scanf("%d", &num[j]);
    }

    printf("Digite qual numero deseja procurar: ");
    scanf("%d", &procurado);

    for (i = 0; i < 5; i++)
    {

        if (num[i] == procurado)
        {
            pos = i;
            break;
        }
        else if (num == num)
        {
            ig++;
        }
    }
    if (pos != -1)
    {
        printf("Encontrado na posicao %d\n", pos + 1);
    }

    else
    {
        printf("Numero nao escontrado\n");
    }

    printf("%d numeros iguais\n", ig);

    return 0;
}