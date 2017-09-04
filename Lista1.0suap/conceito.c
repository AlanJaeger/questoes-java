#include <stdio.h>

double media (double a, double b, double c){
	double media;
	media = (a + b + c)/3;
	return media;
}
int main(int argc, char const *argv[]){
	double a, b, c, m;
	printf("Digite suas três notas:\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	m = media(a,b,c);

	if (m >= 9.0){
		printf("Conceito A\n");
	}
	else if (m >= 7.5 && m < 9.0){
		printf("Conceito B\n");
	}
	else if (m >= 6.0 && m < 7.5){
		printf("Conceito C\n");
	}
	else if (m < 6.0){
		printf("Conceito D\n");
	}
	
	return 0;
}