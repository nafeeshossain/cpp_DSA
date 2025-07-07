#include<iostream>
using namespace std;
int main() {

// *******
// *** ***
// **   **
// *     *

    int n;
    cin>>n;
    for(int m = 1; m<=(2*n-1); m++){ cout<<"*";}
    cout<<endl;
    n=n-1;
    for(int i=1; i<=n ; i++){
        for(int j=1; j<=(n+1-i) ; j++){
            cout<<"*";
        }
        for(int k=1; k<=2*i-1; k++){
            cout<<" ";
        }

        for(int l=1; l<=(n+1-i) ; l++){
            cout<<"*";
        }
        cout<<endl;    
    }

    return 0 ;
}