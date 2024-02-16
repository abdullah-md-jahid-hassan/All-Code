#include<bits/stdc++.h>

using namespace std;

void solve(){

int a,b,c;

Editor:

cout << "\nEnter 3 numbers --- \n";

cout << "\nEnter First number : ";

cin >> a;

cout << "\nEnter Second number : ";

cin >> b;

cout << "\nEnter Third number : ";

cin >> c;

cout << "\nExpected Output : ";

if(a>b and b>c)

        cout <<"Decreasing\n";

else if(a<b and b<c)

        cout << "Increasing\n";

else {

        cout << "Neither increasing or decreasing order\n";

        goto Editor;

}

}

int main(){

solve();

return 0;

}
