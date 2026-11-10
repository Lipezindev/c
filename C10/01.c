#include <stdio.h>

int main(void)
{
    int matriz[3][2] = {{1,2}, {3,4}, {4,5}};

   
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}