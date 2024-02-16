#include<bits/stdc++.h>

using namespace std;

class ABC_IceCreame_Parlour{

public:

    string location, flavour0;

    void set_info(){

        cout << "Enter the address of ICE cream parlour : ";

        getline(cin >> ws, location);

        cout << "Enter the flavours of ice creams : ";

        getline(cin >> ws, flavour0);

    }

};

class ABC_IceCreame_Parlour_two : public ABC_IceCreame_Parlour{

public:

    void set_info(){

        cout << "Enter the address of ICE cream parlour Two : ";

        getline(cin >> ws, location);

        cout << "Enter the flavours of ice creams : ";

        getline(cin >> ws, flavour0);

    }

};

void solve(){

    ABC_IceCreame_Parlour ob1;

    ABC_IceCreame_Parlour_two ob2;

    ob1.set_info();

    ob2.set_info();

    string address, flavour;

    cout << "Enter your location : ";

    cin >> address;

    cout << "Enter your desired flavour : ";

    cin >> flavour;

    if(ob1.location == address){\

        if(ob1.flavour0 == flavour){

            cout << "Available\n";

        }else{

            cout << "Not Available\n";

        }

    }else if(ob2.location == address){



        if(ob2.flavour0 == flavour){

            cout << "Available\n";

        }else{

            cout << "Not Available\n";

        }

    }else cout << "Not Available\n";

}

int main(){

solve();

return 0;

}
