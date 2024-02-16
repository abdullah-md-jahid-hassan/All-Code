#include<stdio.h>

int main ()
{
  int s;
  printf("Enter the Array element number: "); scanf("%d",&s);
  int a[s],b[s];
  printf("\nEnter the 1st Array: ");
  for (int i=0;i<s;i++){scanf("%d",&a[i]);}
  printf("\nEnter the 2nd Array: ");
  for (int i=0;i<s;i++){scanf("%d",&b[i]);}
  printf("\n\nThe 1st Array= ");
  for (int i=0;i<s;i++){printf("%d  ",a[i]);}
  printf("\nThe 2nd Array= ");
  for (int i=0;i<s;i++){printf("%d  ",b[i]);}
  printf("\nSum of both Arrays: ");
  for (int i=0;i<s;i++){printf("%d  ",a[i]+b[i]);}

  return 0;
}
