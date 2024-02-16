#include<stdio.h>

int main ()
{
  int n,t,s=0;
  printf("Enter the Number: ");
  scanf("%d",&n);
  t=n;
  while (n!=0)
  {
    s+=(n%10)*(n%10);
    n/=10;
  }
  if (t==s)
  {
    printf("\n%d is equal to the sum of cubes of its digits\n",t);
  }
  else
  {
    printf("\n%d isn't equal to the sum of cubes of its digits\n",t);
  }
  return 0;
}
