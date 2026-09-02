#include <stdio.h>


int main(){

    int seg, min, hr, sw;


    printf("Digite a quantidade de segundos:");
	scanf("%d", &seg);

    hr = seg / 3600;
    min = (seg % 3600) / 60;
    sw = seg % 60;

    printf("\n===RESULTADO===\n");
    printf("%d Hora(s)\n", hr);
    printf("%d Minuto(s)\n", min);
    printf("%d Segundos(s)\n", sw);

	return 0;
}