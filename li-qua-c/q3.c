#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 

int main(){

    system("chcp 65001 > nul");
    
    int min, hr, sw;


    printf("Digite a quantidade de minutos: ");
	scanf("%d", min);

    printf("Digite a quantidade de horas: ");
	scanf("%d", &hr);

    if (hr > 0 && hr < 5 && min > 0 && min < 59){
        printf("Madrugada");
    }
    else if (hr > 6 && hr < 11 && min > 0 && min < 59)
    {
        printf("Manhã");
    }
    else if (hr > 12 && hr < 17 && min > 0 && min < 59)
    {
        printf("Tarde");
    }

     else if (hr > 18 && hr < 23 && min > 0 && min < 59)
    {
        printf("Noite");
    }

    else if (min == 0)
    {
        printf("Hora cheia");
    }
    else{
        printf("Opção inválida");
    }
    
    

    
  
	return 0;
}