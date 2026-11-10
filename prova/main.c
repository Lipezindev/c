int porcentagem(int votos, int total)
{
    return (votos * 100) / total;
}
#include <stdio.h>

int main(void)
{

    // cód de votação, fazer sem ia
    // candidato a e candidato b, 20 eleitores e porcentagem
    // tem que colocar matriz e porcentagem, alem do nulo

    int vota, candidatov = 0;
    int votoc1 = 0, votoc2 = 0, nulo = 0;
    printf("=====================================\n");
    printf("              VOTACOES               \n");
    printf("=====================================\n");

    printf("\nCandidato - 1\n");
    printf("\nCandidato - 2\n");
    printf("\nNulo - 0\n");

    do{

 
        for (int i = 0; i < 4; i++)
        {
            printf("Eleitor %d digite qual candidato deseja votar:", i + 1);
            scanf("%d", &vota);

            switch (vota)
            {
            case 1:
                votoc1++;
                break;

            case 2:
                votoc2++;
                break;

            case 0:
                nulo++;
                break;

            default:
                printf("Informe um candidato valido\n");
                i--;
                break;
            }
        }

    if (votoc1 > votoc2)
    {
        printf("O candidato 1 Ganhou, com %d votos, representando %.2d%% dos votos válidos", votoc1, porcentagem(votoc1, votoc1 + votoc2 + nulo));
        candidatov++;
    }
    else if (votoc2 > votoc1)
    {
        printf("O candidato 2 Ganhou, com %d votos, representando %.2d%% dos votos válidos", votoc2, porcentagem(votoc2, votoc1 + votoc2 + nulo));
        candidatov++;
    }
    else if (nulo > votoc1 && nulo > votoc2)
    {
        printf("Houve mais votos nulos que candidatos, seguiremos para o segundo turno");
    }

    else
    {
        printf("Houve um empate entre os candidatos, seguiremos para o segundo turno");
    }

       }while (candidatov < 1);

    return 0;
}