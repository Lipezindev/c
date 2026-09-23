#include <stdio.h>

int main (){

    int jo1, jo2;

    printf("===JOKENPO===\n");

    printf("1-Pedra\n");
    printf("2-Papel\n");
    printf("3-Tesoura\n");

    printf("Jogador 1 escolha: \n");
    scanf("%d", &jo1);

    printf("Jogador 2 escolha: \n");
    scanf("%d", &jo2);

    switch(jo1){
    case 1:
        if (jo1 == 1 && jo2 == 1){
            printf("EMPATE!");
        }
        else if (jo1 == 1 && jo2 == 3){
            printf("Jogador 1 venceu!!!!");
        }
        else{
            printf("Jogador 2 venceu!!!!");
        }
        break;

        case 2:
        if (jo1 == 2 && jo2 == 2){
            printf("EMPATE!");
        }
        else if (jo1 == 2 && jo2 == 1){
            printf("Jogador 1 venceu!!!!");
        }
        else{
            printf("Jogador 2 venceu!!!!");
        }
        break;

        case 3:
        if (jo1 == 3 && jo2 == 3){
            printf("EMPATE!");
        }
        else if (jo1 == 3 && jo2 == 2){
            printf("Jogador 1 venceu!!!!");
        }
        else{
            printf("Jogador 2 venceu!!!!");
        }
        break;
    }



    return 0;
}
