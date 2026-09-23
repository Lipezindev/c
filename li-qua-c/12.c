#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 

int main(){

    system("chcp 65001 > nul");

    float ren;
    int id;
 
    printf("Digite sua idade:");
	scanf("%d", &id);  

    printf("Digite sua renda R$:");
	scanf("%f", &ren);

    if(id <= 18 && ren >= 2000){
        printf("O empréstimo foi aprovado!");
    }
    else{
        printf("O empréstimo foi negado!");

    }

  

	return 0;
}