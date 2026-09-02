#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 

int main(){

    system("chcp 65001 > nul");

    int um, dois, tres;

    printf("===QUAL É MAIOR===\n");

    printf("Digite um número:");
	scanf("%d", &um);

    printf("Digite mais um número:");
	scanf("%d", &dois);

    printf("Digite o último número:");
	scanf("%d", &tres);

    if(um > dois && um > tres){
        printf("O primeiro número é o maior");
    }
    else if (dois > um && um > tres){
        printf("O segundo número é o maior");
    }

    else if (tres > dois && tres > um){
        printf("O primeiro número é o maior");
    }
    
    else{
        printf("Os números são iguais");
    }

  
	return 0;
}