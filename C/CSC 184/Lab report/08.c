#include<stdio.h>

int main ()
{
  int s,t;
  printf("Enter Basic Salary: ");scanf("%d",&s);
  if (s<=20000) {t=s+150+750;}
  else if (s>20000 && s<40000){t=s+250+800;}
  else if (s>40000){t=s+350+900;}
  printf("The gross salary= %d",t);
  return 0;
}
