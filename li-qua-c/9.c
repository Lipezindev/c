#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 

int main(){

    system("chcp 65001 > nul");

    float med, ren, fre;
 
    printf("Digite a média do aluno:");
	scanf("%f", &med);  

    printf("Digite a renda familiar do aluno:");
	scanf("%f", &ren);

    printf("Digite a frequência do aluno:");
	scanf("%f", &fre);

    if(med <= 8 && ren <= 4000 && fre <= 75){
        printf("A bolsa foi aprovada");
    }
    else{
        printf("A bolsa foi reprovada");

    }

  

	return 0;
}