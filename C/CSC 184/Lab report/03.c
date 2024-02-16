#include<stdio.h>
int main ()
{
  int n1,n2,m,h=1;
  printf("Enter any two numbers: ");
  scanf("%d%d",&n1,&n2);
  m=(n1<n2)?n1:n2;
  for(int i=1;i<=m;i++)
  {
    if(n1%i==0 && n2%i==0){h=i;}
  }
  printf("HCF of %d and %d = %d\n",n1,n2,h);
  return 0;
}
