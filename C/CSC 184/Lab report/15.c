#include<stdio.h>
void pair_find (int s,int a[],int n)
{
  int c=0;
  for (int i=0;i<s-1;i++)
  {
    for (int j=i+1;j<s-1;j++)
    {
      if (a[i]+a[j]==n)
      {
        printf("The pair is %d, %d\n",a[i],a[j]);
        c=1;
      }
    }
  }
  if (c==0)
  {
    printf("Sir,there's no pair of numbers equal to your number");
  }
}
int main ()
{
  int n;
  printf("Enter number of element: ");
  scanf("%d",&n);
  int x[n],a;
  printf("Enter numbers: ");
  for (int i=0;i<n;i++)
  {
    scanf("%d",&x[i]);
  }
  printf("Enter the sum: ");
  scanf("%d",&a);
  pair_find (n,x,a);
  return 0;
}
