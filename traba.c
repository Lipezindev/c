//Filipe Gonçalves dos Santos - UC26103718
//Julio Cesar Elias de Almeida - UC26200371


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("chcp 65001 > nul");

    int equipes, escolhas = 0, vitorias, i, empates, derrotas, totaljogos, registro = 0, totalvitorias = 0, totalderrotas = 0, totalempates = 0;
    int simulacoes, simulacao, simulapontos, simvitorias, simempates, simderrotas;
    int qtd_excelente = 0, qtd_boa = 0, qtd_regular = 0, qtd_ruim = 0;
    int pontos = 0, jogos = 0;
    float media;

    while (escolhas != 5)
    {
        printf("====== MENU ======\n");
        printf("1 - Registrar resultado do campeonato\n");
        printf("2 - Mostrar resumo do campeonato\n");
        printf("3 - Mostrar regulamento\n");
        printf("4 - Simular campanha de uma equipe\n");
        printf("5 - Encerrar sistema\n");

        printf("Escolha uma opção: ");
        scanf("%d", &escolhas);

        switch (escolhas)
        {
        case 1:
            printf("Digite o número de equipes (entre 3 e 10): ");
            scanf("%d", &equipes);
            if (equipes < 3 || equipes > 10)  
            {
                printf("Número de equipes inválido. Digite um número entre 3 e 10.\n");
                break;
            }

            printf("Digite a quantidade de jogos de cada equipe: ");
            scanf("%d", &jogos);

            if(jogos < 1 || jogos > 10)
            {
                printf("Quantidade de jogos inválida. Digite um número entre 1 e 10.\n");
                break;
            }

            pontos = 0;
            totalvitorias = 0;
            totalempates = 0;
            totalderrotas = 0;

            for (i = 1; i <= equipes; i++)
            {
                printf("\nEquipe %d:\n", i);
                printf("Digite o número de vitÃ³rias: ");
                scanf("%d", &vitorias);
                totalvitorias += vitorias;
                printf("Digite o número de empates: ");
                scanf("%d", &empates);
                totalempates += empates;
                printf("Digite o número de derrotas: ");
                scanf("%d", &derrotas);
                totalderrotas += derrotas;

                if (vitorias + empates + derrotas != jogos)
                {
                    printf("A soma de vitórias, empates e derrotas nÃ£o corresponde a quantidade de jogos.\n");
                    printf("Tente novamente para a Equipe %d.\n", i);
                    i--;
                    continue;
                }

                int pontos_equipe = (vitorias * 3) + (empates * 1);
                pontos += pontos_equipe; 
                
                float aproveitamento = (pontos_equipe * 100.0) / (jogos * 3);

                printf("\nEquipe %d: %d vitórias, %d empates e %d derrota(s)\n", i, vitorias, empates, derrotas);
                printf("Pontuação: %d pontos\n", pontos_equipe);
                printf("Situação: ");
                
                if (aproveitamento >= 75.0)
                {
                    printf("Campanha excelente! Equipe %d\n", i);
                    qtd_excelente++;
                }
                else if (aproveitamento >= 50.0)
                {
                    printf("Campanha boa! Equipe %d\n", i);
                    qtd_boa++;
                }
                else if (aproveitamento >= 25.0)
                {
                    printf("Campanha regular! Equipe %d\n", i);
                    qtd_regular++;
                }
                else
                {
                    printf("Campanha ruim! Equipe %d\n", i);
                    qtd_ruim++;
                }
            }

            registro = 1;
            printf("\nResultados registrados com sucesso!\n");
            break;

        case 2:
            if (registro == 0)
            {
                printf("REGISTRE OS RESULTADOS DO CAMPEONATO PRIMEIRO\n");
            }
            else
            {
                printf("\n==== RESUMO DO CAMPEONATO ====\n");
                printf("Quantidade de equipes: %d\n", equipes);
                printf("Jogos por equipe: %d\n", jogos);
                printf("Vitórias: %d\n", totalvitorias);
                printf("Empates: %d\n", totalempates);
                printf("Derrotas: %d\n", totalderrotas);
                printf("Pontos: %d\n", pontos);
                media = (float)pontos / equipes;
                printf("MÃ©dia de pontos: %.2f \n", media);

                printf("\nDESEMPENHO DAS EQUIPES\n");
                printf("Excelente campanha: %d\n", qtd_excelente);
                printf("Boa campanha: %d\n", qtd_boa);
                printf("Campanha regular: %d\n", qtd_regular);
                printf("Campanha ruim: %d\n", qtd_ruim);
            }
            break;

        case 3:
            printf("\n==== REGULAMENTO ====\n");
            printf("\n--- Pontuação ---\n");
            printf("Vitória:  3 pontos\n");
            printf("Empate:   1 ponto\n");
            printf("Derrota:  0 pontos\n");
            printf("\n--- Faixas de ClassificaÃ§Ã£o (Aproveitamento) ---\n");
            printf("75%% ou mais:       Excelente campanha\n");
            printf("De 50%% a 74.9%%:    Boa campanha\n");
            printf("De 25%% a 49.9%%:    Campanha regular\n");
            printf("Menos de 25%%:      Campanha ruim\n");
            printf("\n--- Configuração Inicial ---\n");
            printf("Quantidade de equipes: 3 a 10\n");
            printf("Jogos por equipe:      1 a 10\n");
            break;

        case 4:
            printf("Informe quantas simulações deseja (1 a 5): ");
            scanf("%d", &simulacoes);
            while (simulacoes < 1 || simulacoes > 5)
            {
                printf("Valor inválido. Informe um número entre 1 e 5:\n");
                scanf("%d", &simulacoes);
            }
            
            for (simulacao = 1; simulacao <= simulacoes; simulacao++)
            {
                printf("\nSimulação: %d\n", simulacao);

                printf("Vitórias: ");
                scanf("%d", &simvitorias);

                printf("Empates: ");
                scanf("%d", &simempates);

                printf("Derrotas: ");
                scanf("%d", &simderrotas);

                totaljogos = simvitorias + simempates + simderrotas;

                while (simvitorias < 0 || simempates < 0 || simderrotas < 0 || totaljogos != jogos)
                {
                    printf("Resultados inválidos. Digite novamente\n");

                    printf("Vitórias: ");
                    scanf("%d", &simvitorias);

                    printf("Empates: ");
                    scanf("%d", &simempates);

                    printf("Derrotas: ");
                    scanf("%d", &simderrotas);
                    totaljogos = simvitorias + simempates + simderrotas;
                }
                
                simulapontos = (simvitorias * 3) + (simempates * 1);
            
                float aproveitamento_sim = (simulapontos * 100.0) / (jogos * 3);

                printf("\nSimulações %d: %d vitórias, %d empates e %d derrota(s)\n", simulacao, simvitorias, simempates, simderrotas);
                printf("Pontuação: %d pontos\n", simulapontos);
                printf("Simulações: ");
                
                if (aproveitamento_sim >= 75.0)
                {
                    printf("Campanha excelente!\n");
                }
                else if (aproveitamento_sim >= 50.0)
                {
                    printf("Campanha boa!\n");
                }
                else if (aproveitamento_sim >= 25.0)
                {
                    printf("Campanha regular!\n");
                }
                else
                {
                    printf("Campanha ruim!\n");
                }
            }
            break;

        case 5:
            printf("Sistema encerrado com sucesso. Obrigado por utilizar o sistema\n");
            break;

        default:
            printf("Opcao inválida!\n");
        }
    }

    return 0;
}
