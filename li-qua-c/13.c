#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 

int main(){

    system("chcp 65001 > nul");
    
    int est;
    int id;
 
    printf("Digite sua idade:");
	scanf("%d", &id);  
    

    printf("\nDigite 1 se é estudante ou 0 se não for:\n");
	scanf("%d", &est); 
    switch (est)
    {
        case 1:
        printf("\n1 - SOU ESTUDANTE");
        break;

        case 2:
        printf("\n0 - NÃO SOU ESTUDANTE");
        break;

    default:
        break;
    }

     if (id >= 60 || est == 1) {
        printf("Desconto concedido");
    }
    else{
        printf("Sem desconto");
    }
    


	return 0;
}