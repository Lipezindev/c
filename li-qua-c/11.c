#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 

int main(){

    system("chcp 65001 > nul");

    float vel;
 
    printf("Digite a velocidade do veiculo na via:");
	scanf("%f", &vel);  

    if(vel >= 80 && vel <=100){
        printf("infração média");
    }
    else if (vel >=101)
    {
        printf("Infração grave");    
    }
    else{
        printf("Sem infração");    

  }

	return 0;
}