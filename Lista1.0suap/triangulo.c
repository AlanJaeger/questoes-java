#include <stdio.h>

double triangulo (double a, double b, double c){
	if ((a*a)+(b*b) == c*c){
		return 1;
	}
	else{
		return 0;
	}
}
int main(int argc, char const *argv[]){
	double a, b, c;
	printf("Digite os três lados do triângulo:\n");
	scanf("%lf %lf %lf", &a, &b, &c);

	if (triangulo(a,b,c) == 0){
		printf("Não é um triângulo retângulo!\n");
	}
	else{
		printf("É um triângulo retângulo!\n");
	}
	
	return 0;
}