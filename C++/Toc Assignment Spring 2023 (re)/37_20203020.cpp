#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int state=0; //Also indecate the total money.
    cout<<"Ready to receive money. Ticket price is 60 tk. Please enter 10 to 100 tk banknotes.\n";
    while (state<60)
    {
        int tk=0;
        cin>>tk; //Entered tk.
        if (tk==10 || tk==20 || tk==50 || tk==100) state+=tk;
        else cout<<"\nThe Banknote isn't valid. Please enter 10 to 100 tk banknotes.\n";
        switch (state)
        {
            case 10: //For all valid notes.
            case 20:
            case 30:
            case 40:
            case 50:
                cout<<"\n"<<state<<" tk received. Need more money. Please enter 10 to 100 tk banknotes.\n";
        }
    }
    //After taking enough money.
    cout<<"\nTotal "<<state<<" tk received. Your ticket is ready. "<<(state-60)<<" tk have been retuened.\nHave a safe journey.\n";
}

