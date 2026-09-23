#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 

int main(){

    system("chcp 65001 > nul");
    float tol, ent;
    int  c;
    
   	printf("\n=== BILHETERIA ===\n");
	printf("\n1 - Inteira (R$ 32,00)");
	printf("\n2 - Meia-entrada (R$ 16,00)");
	printf("\n3 - Infantil (R$ 12,00).");
    

    printf("\nDigite qual o tipo de ingresso deseja comprar: ");
	scanf("%d", &c); 
    printf("\nInforme quantos ingressos deseja comprar: ");
    scanf("%f", &ent);

    if (ent >= 5)
    {
       ent = ent - (0.10 * ent);
    }

    switch (c)
    {
        
        case 1:
        printf("\n1 - o ingresso inteira é R$32,00");
        tol = ent * 32;
        printf("\nO valor total ficou %.2f", tol);
        break;

        case 2:
        printf("\n2 - o ingresso meia-entrada é R$16,00");
        tol = ent * 16;
        printf("\nO valor total ficou %.2f", tol);
        break;

        case 3:
        printf("\n3 - o ingresso infantil é R$12,00");
        tol = ent * 12;
        printf("\nO valor total ficou %.2f", tol);
        break;

    default:
    	printf("\nOpção inválida.\n");
        break;
        
    }


	return 0;
}
