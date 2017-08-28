#include <stdio.h>

int soma (int num1, int num2){
	int soma;
	soma = num1 + num2;
	return soma;
}

int main (int argc, char **argv){
    int num1, num2;
	printf("Digite dois números inteiros: ");
	scanf("%d",&num1);
	scanf("%d",&num2);
	int s = soma(num1,num2);
	printf("A soma é: %d", s);

	return 0;
}