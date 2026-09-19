#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int multiplicacao = num1 * num2;
    int divisao = num1 / num2;

    printf("A soma dos dois números é: %d\n", soma);
    printf("A subtração dos dois números é: %d\n", subtracao);
    printf("A multiplicação dos dois números é: %d\n", multiplicacao);
    printf("A divisão dos dois números é: %d\n", divisao);

    return 0;
}