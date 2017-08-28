#include <stdio.h>

int main (int argc, char **argv)
{ 
	int pot=1, x, y;
	scanf("%d %d", &x, &y); 

		while (int i = 1; i <= y; i++){ 
		pot *= x;  
		} 

	printf("\n%d ^ %d = %d", x, y, pot); 
	return 0; 
}