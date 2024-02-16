#include<stdio.h>

int main ()
{
  printf("Enter the year: "); int y; scanf("%d",&y);
  printf("Year %d is ",y);
  if (y%4==0&&y%100!=0)
  {
    printf("Leap Year");
  }
  else if (y%100==0&&y%400==0)
  {
    printf("Leap Year");
  } else {
    printf("not Leap Year");
  }
  return 0;
}
