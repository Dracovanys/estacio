#include <stdio.h>

float vol, r, a;
float pi = 3.14159;

main() {
	
	printf("Digite o valor do raio: ");
	scanf("%f", &r);
	
	printf("Digite o valor da altura: ");
	scanf("%f", &a);
	
	vol = pi * r * r * a;
	
	printf("\n======== CALCULO ========\n\nRaio: %.2f\nAltura: %.2f\n\nVolume: %.2f", r, a, vol);	
}
