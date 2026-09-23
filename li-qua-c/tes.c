#include <stdio.h>

int main() {
    int jo1, jo2, p1, p2, di, f1, f2;

    char no1, no2;


    printf("===CORRIDA DE DRONES===:\n");
    printf("\nA nome do primeiro piloto: ");
    scanf("%c", &no1);
    printf("\nA tempo, em segundos, que o primeiro piloto levou para completar o percurso: ");
    scanf("%d", &jo1);

    printf("\nA quantidade de penalidades cometidas pelo primeiro piloto: ");
    scanf("%d", &p1);

    printf("\nA nome do segundo piloto: ");
    scanf("%c", &no2);

    printf("\nA tempo, em segundos, que o segundo piloto levou para completar o percurso: ");
    scanf("%d", &jo2);

    printf("\nAquantidade de penalidades cometidas pelo segundo piloto: ");
    scanf("%d", &p2);


    return 0;
}