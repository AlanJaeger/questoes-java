#include <stdio.h>

int maior (int num1, int num2, int num3){
	int maior = 0;
	if (num1 > num2 && num1 > num3){
		maior = num1;
	}
	if (num2 > num1 && num2 > num3){
		maior = num2;
	}
	else{
		maior = num3;
	}
	return maior;
}
int main(int argc, char const *argv[]){
	int num1, num2, num3, m;
	printf("Digite três valores:\n");
	scanf("%d %d %d", &num1, &num2, &num3);
	m = maior(num1,num2,num3);

	printf("O maior valor é:%d\n", m);
	
	return 0;
}