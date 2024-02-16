#include <bits/stdc++.h>
using namespace std;

class hassan
{
public:
    int a;
    float h;
    hassan()
    {
        cout<<"Class name is hassan";
    }
    hassan (int ag,float hi)
    {
        a=ag;
        h=hi;
    }
    hassan(hassan &h1)
    {
        a=h1.a;
        h=h1.h;
    }
    ~hassan()
    {
        cout<<"\nEverything is cleard";
    }
};

int main ()
{
    int x;
    float y;
    cout<<"Enter age: ";cin>>x;
    cout<<"Enter hight: ";cin>>y;
    hassan o1(x,y);
    cout<<"\n\n1st object Age:"<<o1.a<<"1st object hight:"<<o1.h;
    hassan o2=o1;
    cout<<"\n\n2nd object Age:"<<o2.a<<"2nd object hight:"<<o2.h;
    return 0;
}
