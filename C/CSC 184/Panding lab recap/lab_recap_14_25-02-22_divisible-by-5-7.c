#include<stdio.h>

int main ()
{
  printf("Enter the Number: "); int a; scanf("%d",&a);
  if (a%5==0&&a%7==0)
  {
    printf("%d is devisible by 5 and 7",a);
  }
  else
  {
    printf("%d isn't devisible by 5 and 7",a);
  }
  return 0;
}
