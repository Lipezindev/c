#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 

int main(){

    system("chcp 65001 > nul");

    float valor, troco, pago, res;
 

    printf("Digite o valor da compra:");
	scanf("%f", &valor);

    printf("\nDigite o valor entregue pelo cliente:");
	scanf("%f", &pago);

    if(valor < pago){
        printf("\nPagamento confirmado");
        troco = pago - valor;
        printf("\nTroco R$: %.f", troco);
    }
    else if(valor == pago){
        printf("\nPagamento confirmado");
        printf("\nSem troco");


    }

    else{
        printf("\nValor insuficiente");
    }


	return 0;
}