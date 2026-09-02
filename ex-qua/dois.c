#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 

int main(){

    system("chcp 65001 > nul");

    float valor, taxa, total;
    int parte;

    printf("Digite o valor total do consumo:");
	scanf("%f", &valor);

    printf("Digite a quantidade de pessoas que consumiram:");
	scanf("%d", &parte);

    taxa = valor + (100/10);
    total = taxa / parte;

    printf("\nO valor total apos a taxa: R$%.2f", taxa);
    printf("\nCada pessoa deverá pagar: R$%.2f", total);



	return 0;
}