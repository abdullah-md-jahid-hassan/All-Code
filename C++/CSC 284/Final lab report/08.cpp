#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;

    cout << "Enter the number of elements : ";

    cin >> n ;

    int ar[n];

    cout << "Enter the elements : ";

    for(int i=0;i<n;i++) cin >> ar[i];

    cout << "Enter the specified Number : ";

    int sum; cin >> sum ;

    cout << "All pairs for the sum " << sum << endl << "Pairs --- " <<endl;

    for(int i=0;i<n;i++) {

        for (int j=i+1;j<n;j++){

            if(ar[i]+ar[j]==sum){

                cout << ar[i] << " " <<ar[j] << endl;

            }

        }

    }

    return 0;

}
