#include <stdio.h>
int cont_soma (int num){
	int soma = 0, i;
	for(i = 1; i <= num; i++){
		 soma += i;
		 printf("%d\n", i);
	}

	return soma;
}	

int main (int argc, char **argv){
    int num;
	printf("Digite um número:\n");
	scanf("%d",&num);
	printf("%d\n", cont_soma(num));
	
	return 0;
} 
	