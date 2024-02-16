#include <bits/stdc++.h>
using namespace std;

int main ()
{
  string s;
    getline(cin>>ws,s);
    int v=0,c=0;
    for(int i=0;i<s.size();i++)
    {
      if(s[i]>=65&&s[i]<=90)
      {
         s[i]+=32;
      }
      if(s[i]=='a'||s[i]=='e'|| s[i]=='i'||s[i]=='o'||s[i]=='u')
        v++;
      else if(s[i]>='a'&&s[i]<='z')
        c++;
    }
  cout<<"Total Vowel="<<v<<" and Constant="<<c<<endl;
  return 0;
}
