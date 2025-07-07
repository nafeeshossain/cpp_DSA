#include<iostream>
using namespace std;
int main(){

// *
// ***
// *****

    int x;
    cin>>x;

    int a=1;
    for(int i=1; i<=x ; i++){
        for(int k=1; k<=a; k++){
            cout<<"*";
        }
        a+=2;
        cout<<endl;
    }

    cout<<endl;

    for(int i=1; i<=x ; i++){
        for(int k=1; k<=(2*i-1); k++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}