#include "stdio.h" 
int main (void){
    float in[] = {7.0, 8.5 , 9.0};
    for (int i = 0; i < 3; i++)
    {
        printf("%.2f\n", in[i]);
    }
    

    return 0;   
}