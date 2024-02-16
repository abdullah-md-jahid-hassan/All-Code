#include<stdio.h>

int main ()
{
  printf("Enter the character: "); char a; scanf("%c",&a);
  printf("It's ");
  if ((a>65&&a<91)||(a>96&&a<123))
  {
    printf("Alphabet\n");
  }
  else
  {
    printf("not Alphabet\n");
  }
  return 0;
}
