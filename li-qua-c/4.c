#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 

int main(){

    system("chcp 65001 > nul");

    float km, lt, consumo, alt, bai;
 
    printf("Digite a distância percorrida:");
	scanf("%f", &km);

    printf("Digite a quantidade de litros:");
	scanf("%f", &lt);

    consumo = km / lt;

    if(consumo < 8){
        printf("%.2f km/l é Consumo alto", consumo);
    }
    else if (consumo > 8 && consumo < 12){
        printf("%.2f km/l é Consumo médio", consumo);

    }
    else if (consumo > 12){
         printf("%.2f km/l é Consumo econômico", consumo);

    }

  

	return 0;
}