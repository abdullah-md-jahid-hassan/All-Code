#include <bits/stdc++.h>
using namespace std;
void res ()
{
  float ssc,jsc,hsc;
  cout<<"JSC mark: ";cin>>jsc;
  cout<<"SSC mark: ";cin>>ssc;
  hsc=(0.25*jsc)+(0.75*ssc);
  cout<<"Total mark: "<<hsc<<"\nGrade: ";
  if(hsc>=80 && hsc<=100){cout<<"A"<<endl;}
  else if(hsc>=70 && hsc<80){cout<<"B"<<endl;}
  else if(hsc>=60 && hsc<70){cout<<"C"<<endl;}
  else if(hsc>=50 && hsc<60){cout<<"D"<<endl;}
  else{cout<<"Fail"<<endl;}
}

int main ()
{
  string sub;
  z:
  cout<<"\nSubject Name: ";
  getline(cin>>ws,sub);
  res();
  goto z;
  return 0;
}
