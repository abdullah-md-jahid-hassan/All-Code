#include<stdio.h>
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  for(int i=2;i<=n; i+=2)
  {
    printf("Multiplication table for %d\n", i);
    for(int j=1; j<=10; j++)
    {
      printf("%d * %d = %d\n",i,j,i*j);
    }
    printf("\n");
  }
  return 0;
}
