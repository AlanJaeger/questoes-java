#include <stdio.h>

int resto(int num1){
	int resto;
	resto = num1%2;

	return resto;
}

int main(){
	int x;
	printf("Digite um número:\n");
	scanf("%d", &x);
	
	if(resto(x) == 0){
		printf("O número é par!\n");
	}
	else{
		printf("O número é ímpar!\n");
	}

	return 0;
}