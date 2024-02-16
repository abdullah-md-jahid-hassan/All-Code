#include<stdio.h>

int main ()
{
  printf("Enter weak day number: "); int a; scanf("%d",&a);
  printf("It's ");
  switch (a)
  {
    case 1:
      printf("Saturday\n");
    case 2:
      printf("Sunday\n");
    case 3:
      printf("Monday\n");
    case 4:
      printf("Tuesday\n");
    case 5:
      printf("Wednesday\n");
    case 6:
      printf("Thursday\n");
    case 7:
      printf("Friday\n");
  }
  return 0;
}
