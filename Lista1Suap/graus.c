#include <stdio.h>

float grau (float num1){
	float grau = 0;
	grau = (num1 - 32)/1.8;
	return grau;
}

int main (int argc, char **argv){
    float num1;
	printf("Digite a temperatura em graus Fahrenheit:\n");
	scanf("%f",&num1);
	float g = grau(num1);
	printf("A temperatura em celsius é: %.3f\n", g);

	return 0;
}