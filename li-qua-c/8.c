#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 

int main(){

    system("chcp 65001 > nul");

    float vr, des, tolt;
 
    printf("Digite o valor da compra R$:");
	scanf("%f", &vr);


    if(vr <= 99){
        printf("Sem desconto, total a pagar R$%.2f", vr);
    }
    else if (vr >= 100 && vr <= 199){
        vr = vr - (100/5);
        printf("5%% desconto, total a pagar R$%.2f", vr);

    }
     else if (vr >= 200 && vr <= 499){
        des = vr - (100/10);
        printf("10%% desconto, total a pagar R$%.2f", des);

    }

    else if (vr >= 500){
        des = vr - (100/15);
        printf("15%% desconto, total a pagar R$%.2f", des);

    }
  
	return 0;
}