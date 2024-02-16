#include <bits/stdc++.h>
using namespace std;

class dhaka_bank
{
public:
    string n;
    int d;
    void create_acount()
    {
       cout<<"Enter the user Name: ";getline(cin>>ws,n);
       cout<<"First deposit: ";cin>>d;
    }
    void deposit ()
    {
        int a;
        cout<<"Enter the Monthly deposit: ";cin>>a;
        d+=a;

    }
    void widrowl ()
    {
        int b;
        cout<<"Enter the Monthly widrowl: ";cin>>b;
        d-=b;

    }
    void total ()
    {
        cout<<"Name: "<<n<<"\nBalance: "<<d;
    }

};

int main ()
{
    int n;
    dhaka_bank u1;
    cout<<"Enter\n  1 For create Account.\n  2 For Monthly deposit.\n  3 For Monthly widrowal.\n";
    z:
    cout<<"\nEnter your choice: ";cin>>n;
    if (n==1)
    {
        u1.create_acount();
        u1.total ();
    }
    else if(n==2)
    {
        u1.deposit ();
        u1.total ();
    }
    else if(n==3)
    {
        u1.widrowl ();
        u1.total ();
    }
    goto z;
    return 0;
}
