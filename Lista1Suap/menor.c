#include <stdio.h>

int menor (int num1, int num2){
	int menor = 0;
	if(num1 < num2){
		menor = num1;
	}
	else{
		menor = num2;
	}
	return menor;
}

int main (int argc, char **argv){
    int num1, num2;
	printf("Digite dois números:\n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	int m = menor(num1,num2);
	printf("O menor número é: %d\n", m);

	return 0;
}