#include <stdio.h>

int main ()
{
  printf("Enter Day: "); int d; scanf("%d",&d);
  int y=d/365; d=(d%365);
  printf("%d Years, %d Weaks, %d Days\n",y,(d/7),(d%7));
  return 0;
}
