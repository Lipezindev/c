#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int totalseg = 7384;
    int horas, minutos, segundos;

    horas = totalseg / 3600;
    minutos = (totalseg % 3600) / 60;
    segundos = totalseg % 60;

    printf("Tempo total: %02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}