#include<iostream>
using namespace std;
int main(){

    int x;
    cout<<"No: ";
    cin>>x;

    for(int i = 1; i<=x ; i++ ){
        for (int j = 1; j <= (x+1-i); j++ )
        {
            cout<<"*";
        }
        cout<<endl; 
    }

    // int a = x;
    // for(int i = 1; i<=x ; i++ ){
    //     for (int j = 1; j <= a; j++ )
    //     {
    //         cout<<"*";
    //     }
    //     a = x - 1;
    //     cout<<endl; 
    // }
}