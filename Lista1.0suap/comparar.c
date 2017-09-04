#include <stdio.h>

int maior (int num1){
	if(num1 > 200){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int x;
	printf("Digite um número:\n");
	scanf("%d", &x);

	if(maior(x)){
		printf("O número é maior que 200!\n");
	}
	else{
		printf("O número é menor ou igual a 200!\n");
	}
	return 0;
}