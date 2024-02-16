#include<stdio.h>

int main ()
{
  printf("Enter Month Number: "); int a; scanf("%d",&a);
  printf("The number of Day= ");
  if (a==2)
  {
    printf("28/29*\n*If leap year");
  }
  else if (a==4||a==6||a==9||a==11)
  {
    printf("30\n");
  }
  else
  {
    printf("31\n");
  }
  return 0;
}
