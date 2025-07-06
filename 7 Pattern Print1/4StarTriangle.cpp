#include<iostream>
using namespace std;
int main(){

    int x;
    cout<<"No: ";
    cin>>x;

    for(int i = 1; i<=x ; i++ ){
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl; 
    }

    // My Work

    // int a = 1;
    // for(int i = 1; i<=x ; i++ ){
    //     for (int j = 1; j <= a; j++)
    //     {
    //         cout<<"*";
    //     }
    //     a+=1;
    //     cout<<endl;
        
    // }
    return 0;
}