#include<stdio.h>

int main ()
{
  int a[4]={10,15,8,12};
  for (int i=0;i<4-1;i++)
  {
    for (int j=0;j<4-i-1;j++)
    {
      if (a[j]>a[j+1])
      {
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
  printf("Soted apple number is: ");
  for (int i=0;i<4;i++) {printf("%d, ",a[i]);}
  return 0;
}
