 #include <bits/stdc++.h>
using namespace std;
int main ()
{
    s:
    int y;
    double tk, in, to;
    cout<<"Enter The Amount: ";
    cin>>tk; to=tk*12;
    cout<<"Enter The Inflasion: ";
    cin>>in;
    cout<<"Enter The year: ";
    cin>>y;
    for (int i=0; i<=y; i++)
    {
        cout<<"\nYear "<<i<<"  "<<to;
        to+=tk+(to*in/100);
    }
    cout<<"\n\nFinal Blalance: "<<to<<"\n\n\n\n\n";
    goto s;
}
