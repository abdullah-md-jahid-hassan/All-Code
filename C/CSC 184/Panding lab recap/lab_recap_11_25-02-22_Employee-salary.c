#include <stdio.h>

int main ()
{
  int eid; float wh, sph;
  printf("Enter Employrr ID: "); scanf("%d",&eid);
  printf("Enter Total work houres: "); scanf("%f",&wh);
  printf("Enter Salary per houre: "); scanf("%f",&sph);
  printf("Employrr ID: %d\nSalary: %0.2f",eid,(wh*sph));

  return 0;
}
