#include <stdio.h>

void maior_menor (int a, int b){
	int soma, produto;
	soma = a + b;
	produto = a * b;
	if (a > b){
		printf("A soma é:%d\n", soma);
	}
	else if (a <= b){
		printf("O produto é:%d\n", produto);
	}
}
int main(int argc, char const *argv[]){
	int a, b;
	printf("Digite dois valores:\n");
	scanf("%d %d", &a, &b);
	maior_menor(a,b);
	
	return 0;
}