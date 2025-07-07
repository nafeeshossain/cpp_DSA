#include<iostream>
using namespace std;
int main() {

// *******
// *** ***
// **   **
// *     *

    int n;
    cin>>n;
    for(int m = 1; m<=(2*n-1); m++){ cout<<m;}
    cout<<endl;

    n=n-1;
    for(int i=1; i<=n ; i++){
        int a = 1;
        for(int j=1; j<=(n+1-i) ; j++){
            cout<<a;
            a++;
        }
        for(int k=1; k<=2*i-1; k++){
            cout<<" ";
            a++;
        }

        for(int l=1; l<=(n+1-i) ; l++){
            cout<<a;
            a++;
        }
        cout<<endl;    
    }

    return 0 ;
}