#include <stdio.h>

int main(void)
{
   int ver1[4] = {1, 3, 6, 7, 8};
   int ver2[4];

    for (int i = 0; i < 4; i++)
    {
        ver1[i] = ver2[i];
        printf("colando o vetor2 %d n");
    }
    

    return 0;
}