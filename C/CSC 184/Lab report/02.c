#include<stdio.h>

int main ()
{
  float a,b,c;
  printf("Enter three angle of the triangle: ");
  scanf("%f%f%f",&a,&b,&c);
  printf("The triangle is ");
  if ((a+b+c)==180)
  {
    printf("Valid\n");
  }
  else
  {
    printf("in_valid\n");
  }
  return 0;
}
