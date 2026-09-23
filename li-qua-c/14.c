#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 

int main(){

    system("chcp 65001 > nul");

    int pes, alt, imc;
 
    printf("Digite o seu peso:");
	scanf("%d", &pes);  

    printf("Digite a sua altura:");
	scanf("%d", &alt);

    imc = pes/(alt*alt);

    printf("%d\n", imc);

    if(imc < 18.50){
        printf("Abaixo do peso");
    }
    else if (imc > 18.50 && imc < 24.9 )
    {
        printf("Peso normal");
    }
     else if (imc > 25 && imc < 29.9 )
    {
        printf("Sobrepeso");
    }
    
    else
    {
        printf("Obesidade");

    }

  

	return 0;
}