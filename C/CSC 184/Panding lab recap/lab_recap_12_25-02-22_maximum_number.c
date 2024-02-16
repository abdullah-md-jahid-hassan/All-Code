#include <stdio.h>

int main ()
{
  printf("Enter 3 integers: "); int a,b,c; scanf("%d%d%d",&a,&b,&c);
  printf("Largest Number is ");
  if (a>b&&a>c)
  {
    printf("%d",a);
  }
  else if (b>a&&b>c)
  {
    printf("%d",b);
  }
  else
  {
    printf("%d",c);
  }
  return 0;
}
