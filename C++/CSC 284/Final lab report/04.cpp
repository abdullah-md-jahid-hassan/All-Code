#include <bits/stdc++.h>
using namespace std;
class Bank
{
private:
  string ac;
  int m=0;
public:
  void create_account()
  {
    cout<<"\nEnter User Name: ";cin>>ac;
    cout<<"Enter First Deposit: ";cin>>m;
  }
  void deposit()
  {
    int a;cout<<"\nAmount: ";
    cin>>a;
    m+=a;
  }
  void withdrawl()
  {
    int a;cout<<"\nAmount: ";
    cin>>a;
    m-=a;
  }
  void balance()
  {
    cout<<"\nAccount name="<<ac<<endl;
    cout<<"Total balance="<<m<<endl;
  }
};

int main()
{
  Bank user1;
  int n;
  cout<<"\nEnter:\n  1 For Create a account\n  2 for Deposit\n  3 For Withdrawl\n";
  z:
  cout<<"\nEnter your choice: ";
  cin>>n;
  if(n==1) {user1.create_account();}
  else if(n==2)
  {
    user1.deposit();
  }
  else if(n==3)
  {
    user1.withdrawl();
  }
  user1.balance();
  goto z;
  return 0;
}
