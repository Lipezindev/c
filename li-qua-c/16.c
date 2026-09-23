#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 

int main(){

    system("chcp 65001 > nul");
    float hr, tol;
    int  c;
    
   	printf("\n=== ESTACIONAMENTO ===\n");
	printf("\n1 - Moto");
	printf("\n2 - Carro");
	printf("\n3 - Caminhonete");
    

    printf("\nDigite qual o veiculo:\n");
	scanf("%d", &c); 
    printf("Informe quantos horas passou no local");
    scanf("%f ", &hr);
    
    switch (c)
    {
        
        case 1:
        printf("\n1 - O estacionamento para motos é R$3,00 a hora");
        tol = hr * 3;
        printf("\nO valor do estacionamento ficou %.2f", tol);
        break;

        case 2:
        printf("\n2 - O estacionamento para carros é R$5,00 a hora");
        tol = hr * 5;
        printf("\nO valor do estacionamento ficou %.2f", tol);
        break;

        case 3:
        printf("\n3 - O estacionamento para caminhonetes é R$8,00 a hora");
        tol = hr * 8;
        printf("\nO valor do estacionamento ficou %.2f", tol);
        break;

    default:
    	printf("\nOpção inválida.\n");
        break;
        
    }


	return 0;
}
