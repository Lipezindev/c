#include "stdio.h"

int main(void){
    int idades [5] = {10, 20, 30, 40, 50};
  

    for (int i = 5; i < 0; i--)
    {
        printf("%d\n", idades[i]);
    }
    

    return 0;
}