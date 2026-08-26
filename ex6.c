#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
  if (num % 2 == 0) {
        printf("%d é par.\n", num);
   
    }
	
	
	 else {
        printf("%d é impar.\n", num);
    }
    
	
	return 0;
}
