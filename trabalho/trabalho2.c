#include <stdio.h>
#include <windows.h>

typedef struct {
    int vitorias;
    int derrotas;
    int empates;
    int pontos;
} Equipe;

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int escolha;
    int equipes = 0;
    int jogos = 0;
    int i;
    Equipe campeonato[100];

    do
    {
        printf("\n===== SISTEMA DE CAMPEONATO =====\n");
        printf("1 - Registrar resultados do campeonato\n");
        printf("2 - Mostrar resumo do campeonato\n");
        printf("3 - Mostrar regulamento\n");
        printf("4 - Simular campanha de uma equipe\n");
        printf("5 - Encerrar sistema\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
            case 1:
                printf("\nDigite a quantidade de equipes: ");
                scanf("%d", &equipes);

                if (equipes <= 0 || equipes > 100)
                {
                    printf("Quantidade de equipes invalida!\n");
                    break;
                }

                printf("Digite a quantidade de jogos de cada equipe: ");
                scanf("%d", &jogos);

                if (jogos <= 0)
                {
                    printf("Quantidade de jogos invalida!\n");
                    break;
                }

                for (i = 0; i < equipes; i++)
                {
                    printf("\n--- Equipe %d ---\n", i + 1);

                    printf("Digite a quantidade de vitorias: ");
                    scanf("%d", &campeonato[i].vitorias);

                    printf("Digite a quantidade de derrotas: ");
                    scanf("%d", &campeonato[i].derrotas);

                    printf("Digite a quantidade de empates: ");
                    scanf("%d", &campeonato[i].empates);

                    if (campeonato[i].vitorias +
                        campeonato[i].derrotas +
                        campeonato[i].empates != jogos)
                    {
                        printf("ERRO: a soma de vitorias, derrotas e "
                               "empates deve ser igual a %d.\n", jogos);

                        i--;
                        continue;
                    }

                    campeonato[i].pontos =
                        campeonato[i].vitorias * 3 +
                        campeonato[i].empates;
                }

                printf("\nResultados registrados com sucesso!\n");
                break;

            case 2:
                if (equipes <= 0)
                {
                    printf("\nNenhum campeonato foi registrado ainda.\n");
                    break;
                }

                printf("\n===== RESUMO DO CAMPEONATO =====\n");

                for (i = 0; i < equipes; i++)
                {
                    printf("\nEquipe %d", i + 1);
                    printf("\nJogos: %d", jogos);
                    printf("\nVitorias: %d", campeonato[i].vitorias);
                    printf("\nEmpates: %d", campeonato[i].empates);
                    printf("\nDerrotas: %d", campeonato[i].derrotas);
                    printf("\nPontos: %d\n", campeonato[i].pontos);

                    if (campeonato[i].pontos >= 15)
                    {
                        printf("Classificacao: Excelente campanha\n");
                    }
                    else if (campeonato[i].pontos >= 10)
                    {
                        printf("Classificacao: Boa campanha\n");
                    }
                    else if (campeonato[i].pontos >= 5)
                    {
                        printf("Classificacao: Campanha regular\n");
                    }
                    else
                    {
                        printf("Classificacao: Campanha ruim\n");
                    }
                }

                break;

            case 3:
                printf("\n===== REGULAMENTO =====\n");
                printf("Vitoria: 3 pontos\n");
                printf("Empate: 1 ponto\n");
                printf("Derrota: 0 pontos\n");
                printf("A pontuacao e calculada da seguinte forma:\n");
                printf("Pontos = (vitorias * 3) + empates\n");
                break;

            case 4:
            {
                int v, e, d, pontos_simulados;

                printf("\n===== SIMULADOR DE CAMPANHA =====\n");

                printf("Digite a quantidade de vitorias: ");
                scanf("%d", &v);

                printf("Digite a quantidade de empates: ");
                scanf("%d", &e);

                printf("Digite a quantidade de derrotas: ");
                scanf("%d", &d);

                pontos_simulados = (v * 3) + e;

                printf("\nResultado da simulacao:\n");
                printf("Vitorias: %d\n", v);
                printf("Empates: %d\n", e);
                printf("Derrotas: %d\n", d);
                printf("Pontos: %d\n", pontos_simulados);

                if (pontos_simulados >= 15)
                {
                    printf("Excelente campanha!\n");
                }
                else if (pontos_simulados >= 10)
                {
                    printf("Boa campanha!\n");
                }
                else if (pontos_simulados >= 5)
                {
                    printf("Campanha regular!\n");
                }
                else
                {
                    printf("Campanha ruim!\n");
                }

                break;
            }

            case 5:
                printf("\nSistema encerrado com sucesso. "
                       "Obrigado por utilizar o sistema.\n");
                break;

            default:
                printf("\nOpcao invalida! "
                       "Selecione uma opcao entre 1 e 5.\n");
        }

    } while (escolha != 5);

    return 0;
}