/*#include "stdio.h"

int tab(int a, int b){
    return a * b;
}
int main(void){
    int res;
    int a1, a2;

    printf("digite um numero: ");
    scanf("%d", &a1);

    printf("digite outro numero: ");
    scanf("%d", &a2);

    res = tab(a1, a2);
    
    printf("%d X %d = %d", a1, a2, res);
    return 0;
}*/

#include <stdio.h>

// Função para multiplicar duas matrizes 2x2: C = A * B
void multiplicar(int A[2][2], int B[2][2], int C[2][2]) {
    int temp[2][2] = {0};
    
    // Triplo laço for utilizando os operadores * e +=
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                temp[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    // Copia o resultado para C
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            C[i][j] = temp[i][j];
}

// Função de Exponenciação Rápida: Base^expoente
void potenciarMatriz(int base[2][2], int expoente, int resultado[2][2]) {
    // Inicializa o resultado como a Matriz Identidade (o "1" das matrizes)
    resultado[0][0] = 1; resultado[0][1] = 0;
    resultado[1][0] = 0; resultado[1][1] = 1;

    int atual[2][2];
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
            atual[i][j] = base[i][j];

    // Algoritmo eficiente usando operadores aritméticos no expoente
    while (expoente > 0) {
        if (expoente % 2 == 1) { // Operador de resto (verifica se o expoente é ímpar)
            multiplicar(resultado, atual, resultado);
        }
        multiplicar(atual, atual, atual);
        expoente /= 2; // Operador de divisão com atribuição
    }
}

int main() {
    // Valor 1: Matriz A
    int A[2][2] = {
        {1, 2},
        {3, 4}
    };
    
    // Valor 2: Expoente n
    int n = 2; 
    
    int resultado[2][2];
    
    potenciarMatriz(A, n, resultado);
    
    // Exibe o resultado obtido
    printf("Resultado de A^%d:\n", n);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
