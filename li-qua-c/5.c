#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 

int main(){

    system("chcp 65001 > nul");

    float larg, comp, terr, gram;
 
    printf("Digite a largura do terreno:");
	scanf("%f", &larg);

    printf("Digite o comprimento do terreno:");
	scanf("%f", &comp);

    terr = larg * comp;
    gram = terr * 18.50;
        
    printf("\nA área do terreno é %.2f", terr);
    printf("\nPara cobrir todo o terreno com grama ficaria R$%.2f, cada metro por R$18.50", gram);


  

	return 0;
}