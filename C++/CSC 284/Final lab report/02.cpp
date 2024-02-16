#include <bits/stdc++.h>
using namespace std;

int main()
{
  double n;
  cout<<"Enter the number: ";
  cin>>n;
  if(n==0)
    cout<<"Zero";
  else if(n>0)
    cout<<"Positive";
  else
    cout<<"Negetive";
  n=abs(n);
  if(n<1)
    cout<<" and Small"<<endl;
  else if(n>1000000)
    cout<<" and Large"<<endl;
  else
    cout<<endl;
  return 0;
}
