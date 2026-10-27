// FUNÇÃO - bloco de código para função específica   

#include "stdio.h"

int soma(int a, int b){
        return a + b;
    }
int dobro(int num){
    return num * 2;
}
void mensagem(){
    printf("Ola!\n");
}


void cont(int num){
   if(num == 0)
   {
    return;
   }
   printf("%d\n", num);
   cont(num - 1);
}
int main (void){
    int res;
    int resd;
    resd = dobro(8);
    res = soma(7, 5);
    printf("%d\n", res);
    printf("%d\n", resd);
    mensagem();

    printf("recursividade");
    cont(10);
    return 0;
}