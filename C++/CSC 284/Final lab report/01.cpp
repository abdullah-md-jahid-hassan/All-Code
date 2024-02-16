#include <bits/stdc++.h>
using namespace std;

class muntaha
{
public:
  string na;
  int ag;
  float h;
  muntaha()
  {
    cout<<"This is Sl:1";
  }
  muntaha(string na, int ag, float h)
  {
    cout<<"\nMy name is "<<na<<"\nAge "<<ag<<"\nHight "<<h;
  }
  muntaha(muntaha &a){na=a.na;ag=a.ag;h=a.h;}
  ~muntaha()
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
  muntaha p1(s,a,b);
  muntaha p2=p1;
  return 0;
}
