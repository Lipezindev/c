#include <stdio.h>

int main(){

    int jo1, jo2, p1, p2, di, f1, f2;

    char nome1[50], nome2[50];


    printf("===CORRIDA DE DRONES===:\n");
    printf("\nA nome do primeiro piloto: ");
    scanf(" %s", nome1);
    printf("\nA tempo, em segundos, que o primeiro piloto levou para completar o percurso: ");
    scanf("%d", &jo1);
    printf("\nA quantidade de penalidades cometidas pelo primeiro piloto: ");
    scanf("%d", &p1);

    printf("\nA nome do segundo piloto: ");
    scanf(" %s", nome2);
    printf("\nA tempo, em segundos, que o segundo piloto levou para completar o percurso: ");
    scanf("%d", &jo2);
    printf("\nA quantidade de penalidades cometidas pelo segundo piloto: ");
    scanf("%d", &p2);


    printf("\nCada penalidade acrescenta 5 segundos ao tempo do piloto \n");

    f1 = jo1 + (p1*5);
    f2 = jo2 + (p2*5);

    printf(" Piloto 1: %d\n", nome1);
    printf("Tempo original: %d segundos\n", jo1);
    printf("Penalidades: %d\n", p1);
    printf("Tempo final: %d segundos\n", f1);


    printf(" Piloto 2: %d\n", nome2);
    printf("Tempo original: %d segundos\n", jo2);
    printf("Penalidades: %d\n", p2);
    printf("Tempo final: %d segundos\n", f2);

    if (f1 > f2)
    {
         printf("Vencedor: %c \n", nome1);
    }
    else if (f1 == f2)
    {
        printf("Empate!!\n");
    }
    else{
        printf("Vencedor: %c \n", nome2);
    }


    di = f1 - f2;
    if (f1 == f2) {
        printf("  \n");
    }
    else if (di < 3) {
        printf("Vitória por pouco!\n");
    }
    else if (di > 3 && di < 10) {
        printf("Vitória Tranquila!\n");
    }
    else if (di > 10) {
        printf("Vitória com grande vantagem!\n");
    }

    return 0;
}
