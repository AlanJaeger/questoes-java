#include <stdio.h>
int main (int argc, char **argv){
    int num,i,div = 0;
	printf("Digite um número:\n");
	scanf("%d",&num);
	
	for(i = 1; i <= num; i++){
		if(num % i == 0){
			div += 1;
		}
	}

	if(div == 2){
		printf("O número é primo!\n");
	}
	else{
		printf("O número não é primo!\n");
	}

	return 0;
} 
	