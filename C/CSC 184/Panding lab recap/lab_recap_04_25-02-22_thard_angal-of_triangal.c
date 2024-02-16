#include <stdio.h>

int main ()
{
  printf("Enter two angles: ");
  float a,b;scanf("%f%f",&a,&b);
  printf("Thard angle: %f",(180-a-b));
  return 0;
}
