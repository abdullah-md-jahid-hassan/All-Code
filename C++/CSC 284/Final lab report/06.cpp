#include <bits/stdc++.h>
using namespace std;

class jahid
{
public:
  string na;
  int ag;
  float h;
  jahid()
  {
    cout<<"This is Sl:1";
  }
  jahid(string na, int ag, float h)
  {
    cout<<"\nMy name is "<<na<<"\nAge "<<ag<<"\nHight "<<h;
  }
  jahid(jahid &a){na=a.na;ag=a.ag;h=a.h;}
  ~jahid()
  {
    cout<<"\nSpace Cleaned"<<endl;
  }
};
int main()
{
  string s;
  int a;
  float b;
  cout<<"Name: ";getline(cin>>ws,s);
  cout<<"Age: ";cin>>a;
  cout<<"Hight: ";cin>>b;
  jahid p1(s,a,b);
  jahid p2=p1;
  return 0;
}
