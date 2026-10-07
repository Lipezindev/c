#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int escolha, equipes, i, jogos, vitorias, resultados, derrotas, empates;
    int pontos = 0;

    printf("1 - Registrar resultados do campeonato");
    printf("\n2 - Mostrar resumo do campeonato");
    printf("\n3 - Mostrar regulamento");
    printf("\n4 - Simular campanha de uma equipe");
    printf("\n5 - Encerrar sistema");
    printf("\nEscolha uma opcao:");
    scanf("%d", &escolha);

   
    switch (escolha)
        {
        case 1:
            printf("Digite a quantidade de equipes: ");
            scanf("%d", &equipes);
            if (equipes <= 0 || equipes > 10)
            {
                printf("ERROR");
            }
            
            printf("Digite a quantidade de jogos de cada equipe: ");
            scanf("%d", &jogos);
    

            for (i = 0; i < equipes; i++)
            {
                
                printf("Digite a quantidade de vitórias da equipe: ");
                scanf("%d", &vitorias);
                printf("Digite a quantidade de derrotas da equipe: ");
                scanf("%d", &derrotas);
                printf("Digite a quantidade de empates da equipe: ");
                scanf("%d", &empates);
                resultados++;
            }

            break;
        case 2:
        if (jogos >= 0)
        {
           printf("Opcao invalida");
           return 1;
        }
        else{
            
            pontos = vitorias * 3 + empates;
            printf("Resumo campanha");
            printf("\n jogos por equipe");
            printf("\n%d vitórias,%d empates e %d derrota", vitorias, empates, derrotas);
            printf("\n%d pontos\n", pontos);
            if (pontos >= 15)
            {
                printf("\nExcelente campanha");
            }
            else if (pontos <= 14 && pontos >= 10)
            {
                printf("Boa campanha\n");
            }
            else if (pontos <= 9  && pontos >= 5 ){
                printf ("Campanha regular\n");
            }

            else if (pontos < 5)
                {
                printf("Campanha ruim\n");
                }
        }
        
            

            break;
            
        case 3:
            printf("Resultado Pontuação");
            printf("\nVitória 3 pontos");
            printf("\nEmpate 1 ponto");
            printf("\nDerrota 0 pontos");
            break;
        case 4:

            break;
        case 5:

            printf("Sistema encerrado com sucesso. Obrigado por utilizar o sistema.");
            break;

        default:
            printf("Opção inválida!\nSelecione um opção entre 1 a 5");
            break;
        }
    

    return 0;
}
