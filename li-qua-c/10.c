#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 

int main(){

    system("chcp 65001 > nul");

    float fr, des, tolt;

    printf("===CALCULAR FRETE===\n");
    printf("Digite o valor da compra R$:");
	scanf("%f", &fr);


    if(fr <= 99){
        fr = fr+25;
        printf("Valor do frete R$%.2f", fr);
    }
    else if (fr >= 100 && fr <= 199){
         fr = fr+15;
        printf("Valor do frete R$%.2f", fr);

    }
     else if (fr >= 200 && fr <= 299){
        fr = fr+8;
        printf("Valor do frete R$%.2f", fr);

    }

    else{
        printf("Frete grátis!");

    }

    tolt = fr+des;
    printf("\nO valor total da compra é %.2f,", tolt);
  
	return 0;
}