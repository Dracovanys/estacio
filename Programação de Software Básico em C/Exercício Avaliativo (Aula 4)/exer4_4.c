#include <stdio.h>

float nota1, nota2, nota3;
float media;

main() {

	printf("Insira a nota 1: ");
	scanf("%f", &nota1);
	
	printf("Insira a nota 2: ");
	scanf("%f", &nota2);
	
	printf("Insira a nota 3: ");
	scanf("%f", &nota3);
	
	media = (nota1+nota2+nota3)/3;
	
	printf("\nMedia do aluno: %.1f", media);	
}
