#include <stdio.h>

float media (float nota1, float nota2){
	float media;
	media = (2*nota1 + 3*nota2)/5;
	return media;
}

int main (int argc, char **argv){
    float nota1, nota2;
	printf("Digite duas notas:\n");
	scanf("%f",&nota1);
	scanf("%f",&nota2);
	float m = media(nota1,nota2);
	
	if(m >= 7){
		printf("Aluno aprovado!\n");
	}
	else if(m <= 6 && m >= 2){
		printf("Aluno em recuperação!\n");
	}
	else{
		printf("Aluno reprovado!\n");
	}

	return 0;
}