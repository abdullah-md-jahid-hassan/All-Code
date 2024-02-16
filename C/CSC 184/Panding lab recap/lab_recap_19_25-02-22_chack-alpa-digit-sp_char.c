#include<stdio.h>

int main ()
{
  printf("Enter the character:"); char a; scanf("%c",&a);
  printf("It's a ");
  if ((a>65&&a<91)||(a>96&&a<123))
  {
    printf("Alphabet\n");
  }
  else if (a>47&&a<58)
  {
    printf("Digit\n");
  }
  else
  {
    printf("Special character\n");
  }
  return 0;
}
