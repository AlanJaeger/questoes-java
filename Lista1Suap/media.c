#include <stdio.h>

float media (float nota1, float nota2){
	float media;
	media = (nota1 + nota2)/2;
	return media;
}

int main (int argc, char **argv){
    float nota1, nota2;
	printf("Digite a primeira nota:\n");
	scanf("%f",&nota1);
	printf("Digite a segunda nota:\n");
	scanf("%f",&nota2);
	float m = media(nota1,nota2);
	printf("A média do semestre é: %.2f\n", m);

	return 0;
}
