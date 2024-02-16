#include<stdio.h>

int main ()
{
  nv:
  printf("Enter a Alphsbet: "); char a; scanf("%c",&a);
  if (a==65||a==69||a==73||a==79||a==85||a==117||a==111||a==105||a==101||a==97)
  {
    printf("It is a Vowel\n");
  }
  else if ((a>65&&a<91)||(a>96&&a<123))
  {
    printf("It is a Consonant\n");
  }
  else
  {
    printf("It isn't a Alphabet\nTry again\n");
    goto nv;
  }
  return 0;
}
