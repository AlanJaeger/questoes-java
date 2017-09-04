#include <stdio.h>

int fahrenheit (int num1){
	int fahrenheit;
	fahrenheit = (9 / 5)*num1 + 32;
	return fahrenheit;
}
int celsius (int num1){
	int celsius;
	celsius = (num1 − 32) ÷ 1.8;
	return celsius;
}
double milimetro (int num1){
	double milimetro;
	milimetro = num1*24.5;
	return milimetro;
}
double polegada (double num1){
	int polegada;
	polegada = num1 * 0.039370;
	return polegada;
}
int main(int argc, char const *argv[]){
	int num1, f;
	printf("Digite a temperatura em graus celsius:\n");
	scanf("%d", &num1);
	f = fahrenheit(num1);

	printf("A temperatura em fahrenheit é:%d°F\n", f);
}