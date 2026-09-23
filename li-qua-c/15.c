#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 

int main(){

    system("chcp 65001 > nul");
    
    int cal;
    float km, mt, cm, hr, min, seg;


	printf("=== SISTEMA DE CONVERSÃO ===");


        printf("\n1 - Quilômetros para metros");
        printf("\n2 - Metros para centímetros");
        printf("\n3 - Horas para minutos");
        printf("\n4 - Minutos para segundos");


    printf("\nDigite o que quer calcular:");
    scanf("%d", &cal);

    switch (cal)
    {
        case 1:
        printf("\nDigite a quantidade de KM:");
        scanf("%f", &km);
        mt = km*1000;
        printf("\nO resultado em metros é %.2f:", mt);
        break;

        case 2:
        printf("\nDigite a quantidade de Metros:");
        scanf("%f", &mt);
        cm = mt*100;
        printf("\nO resultado em centímetros é %.2f:", cm);
        break;

        case 3:
        printf("\nDigite a quantidade de horas:");
        scanf("%f", &hr);
        min = hr*60;
        printf("\nO resultado em minutos é %.2f:", min);
        break;

        case 4:
        printf("\nDigite a quantidade de minutos:");
        scanf("%f", &min);
        seg = min*60;
        printf("\nO resultado em minutos é %.2f:", seg);
        break;
        default:
        printf("\nOpção inválida");
    }

    


	return 0;
}