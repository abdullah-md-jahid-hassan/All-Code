#include<stdio.h>
int main ()
{
  int a,b;
  printf("Enter 1st number: ");scanf("%d",&a);
  printf("Enter 2nd number: ");scanf("%d",&b);
  if (a>b){printf("The pair is in descending order!");}
  else{printf("The pair is in assinding order!");}
  return 0;
}
