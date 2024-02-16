#include<stdio.h>

int main ()
{
  int id;
  float u,t;
  scanf("%f%f",&id,&u);
  if (u<200){t=u*1.20;}
  else if (u>200 && u<400) {t=u*1.50;}
  else if (u>400 && u<600) {t=u*1.80;}
  else if (u<600) {t=u*2;}
  printf("Customer IDNO :%d\nunit Consumed :%f\nAmount Charges: %f taka",id,u,t );
  return 0;
}
