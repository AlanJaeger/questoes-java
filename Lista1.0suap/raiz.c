#include <stdio.h>
#include <math.h>

void calcRaizes (int a, int b, int c) {
  int delta, raizUm, raizDois;
  delta = ((b*b) - (4*a*c));
  raizUm = ((-b + sqrt(delta))/(2*a));
  raizDois = ((-b - sqrt(delta))/(2*a));
  
  printf("%d\n", raizUm);
  printf("%d", raizDois);
  
}

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  
  calcRaizes(a, b, c);
  
  return 0;
}