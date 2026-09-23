#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 

int main(){

    system("chcp 65001 > nul");
    float tol, com;
    int  c;
    
   	printf("\n=== POSTO ===\n");
	printf("\n1 - Gasolina (R$ 6,20)");
	printf("\n2 - Etanol (R$ 4,30)");
	printf("\n3 - Diesel (R$ 6,00");
    

    printf("\nDigite com qual o tipo de combustível deseja abastecer: ");
	scanf("%d", &c); 
    printf("\nInforme quantos litros deseja abastecer: ");
    scanf("%f", &com);

    

    switch (c)
    {
        
        case 1:
        printf("\n1 - O valor da gasolina é R$6,20");
        tol = com * 6.20;
        break;
        
        case 2:
        printf("\n2 - O valor do etanol é R$4,30");
        tol = com * 4.30;
        break;

        case 3:
        printf("\n3 - O valor do diesel é R$6,00");
        tol = com * 6.00;
        break;

    default:
    	printf("\nOpção inválida.\n");
        break;
        
    }

    if(tol > 200)
    {
       tol = tol - (0.10 * tol);
    }

    printf("\nO valor total ficou R$ %.2f\n", tol);


	return 0;
}
