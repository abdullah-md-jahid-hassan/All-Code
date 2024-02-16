#include <stdio.h>

int main ()
{
  printf("Enter the First Name: "); char fn[100],ln[100];scanf("%s",&fn);
  printf("Enter the Last Name: "); scanf("%s",&ln);
  printf("Enter Birth Year: "); int by; scanf("%d",&by);
  printf("\n\nFirst Name: %s\nLast Name: %s\nBirth Year: %d",fn,ln,by);
  return 0;
}
