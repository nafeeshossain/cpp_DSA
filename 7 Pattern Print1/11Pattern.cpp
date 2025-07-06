#include<iostream>
using namespace std;
int main(){

    int x;
    cout<<"No: ";
    cin>>x;

    for (int i = 1; i <= x; i++ ) { // Without Mathematical Formula
        int a = 1;
        for (int j = 1; j <= i; j++ ) {
            cout<<a;
            a = a + 2;
        }
        cout<<endl;
    }

    cout<<endl;

    for (int k = 1; k <= x; k++ ) { // wITH fORMULA
        for (int l = 1; l <= (2*k-1); l+=2 ) {
            cout<<l;
        }
        cout<<endl;
    }    
}