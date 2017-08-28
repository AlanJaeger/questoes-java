#include <stdio.h>

int main (int argc, char **argv)
{
    int num1,num2,resto;
      
    printf("Digite dois numeros: ");
    scanf("%d%d", &num1, &num2);
              
    resto=num1%num2;
              
    while(resto!=0)
    {
    num1 = num2;
    num2 = resto;
    resto = num1 % num2;         
    }
    
    printf("MDC = %d\n", num2);

    return 0;
}