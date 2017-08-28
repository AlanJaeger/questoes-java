#include <stdio.h>

double soma (double num1, double num2){
	double soma;
	soma = num1 + num2;
	return soma;
}

int main (int argc, char **argv){
    double num1, num2;
	printf("Digite dois números reais:\n");
	scanf("%lf",&num1);
	scanf("%lf",&num2);
	double s = soma(num1,num2);
	printf("A soma é: %.3lf\n", s);

	return 0;
}