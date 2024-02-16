#include <stdio.h>

int main ()
{
  printf("Enter the Minutes: ");
  int a; scanf("%d",&a);
  printf("%d Hours, %d Minutes",(a/60),(a%60));
  return 0;
}
