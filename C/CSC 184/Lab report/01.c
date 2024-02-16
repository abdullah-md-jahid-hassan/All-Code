#include <stdio.h>

int main ()
{
  printf("Enter the temperature in Centigrade: ");
  float c; scanf("%f",&c);
  printf("Temperature in Fahrenheit= %f",(c*9/5)+32);
  return 0;
}
