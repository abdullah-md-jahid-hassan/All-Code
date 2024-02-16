#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int s;
    cin>>s;
    int ar[s];
    for(int i=0;i<s;i++)
        cin>>ar[i];
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<s;i++)
    {
        for(int j=i+1;j<s;j++)
        {
            if(ar[i]+ar[j]==n)
            {
                v.push_back(ar[i]);
                v.push_back(ar[j]);
            }
        }
    }
    for(auto x:v){cout<<x<<" ";}
  return 0;
}
