#include<stdio.h>

int main ()
{
  printf("Enter the Number: "); float a; scanf("%f",&a);
  printf("%f is ");
  if (a>0)
  {
    printf("Positive");
  }
  else if (a<0)
  {
    printf("Negative");
  }
  else
  {
    printf("Zero");
  }
  return 0;
}
