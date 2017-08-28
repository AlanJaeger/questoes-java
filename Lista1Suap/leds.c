#include <stdio.h> 

int x, i, j, tot_leds = 0;
  char numero[10];
  
  
  printf("Digite a quantidade de números de teste:\n");
  scanf("%d", &x);
  
  for(i = 0; i < x; i++){
    printf("Digite o valor a ser testado:\n"); 
    scanf(" %s", numero);
    
    for (j = 0; numero[j] != '\0' ; j++){
    if(numero[j] == '1')
      tot_leds += 2;
      
    else if(numero[j] == '2' || numero[j] == '3' || numero[j] == '5')
      tot_leds += 5;
      
    else if(numero[j] == '6' || numero[j] == '9' || numero[j] == '0')
      tot_leds += 6;
    
    else if(numero[j] == '4')
      tot_leds += 4;
      
    else if(numero[j] == '7')
      tot_leds += 3;
    
    else
      tot_leds += 7;
    }
   printf("%d leds\n", tot_leds);
   tot_leds = 0;
  }
  return 0; 
}
