#include <stdio.h>

int main ()
{
  float w1,n1,w2,n2;
  printf("Weight-Item 1: ");scanf("%f",&w1);
  printf("No of Item 1: ");scanf("%f",&n1);
  printf("Weight-Item 2: ");scanf("%f",&w2);
  printf("No of Item 2: ");scanf("%f",&n2);
  printf("Avarage Value= %f",((w1*n1)+(w2*n2))/(n1+n2));
  return 0;
}
