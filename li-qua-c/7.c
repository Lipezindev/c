#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 

int main(){

    system("chcp 65001 > nul");

    float lad1, lad2, lad3, tri;
 
    printf("Digite o primeiro valor do lado de um triângulo:");
	scanf("%f", &lad1);

    printf("Digite o segundo valor do lado de um triângulo:");
	scanf("%f", &lad2);

    printf("Digite o terceiro valor do lado de um triângulo:");
	scanf("%f", &lad3);

if (lad1 <= lad2+lad3 && lad2 <= lad1+lad3 && lad3 <= lad1+lad2)
{
    printf("Os valores %.2f, %.2f, %.2f, Formam um triângulo", lad1, lad2, lad3);
}
else{
        printf("Os valores %.2f, %.2f, %.2f, NÃO Formam um triângulo", lad1, lad2, lad3);

}
  

	return 0;
}