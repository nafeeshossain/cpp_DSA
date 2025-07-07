#include<iostream>
using namespace std;
int main(){

    int x;
    cout<<"Number: ";
    cin>>x;

    for (int i = 1; i <= x; i++ ) {
        for (int j = 1; j <= x-i; j++ ) {
            cout<<" ";}
            for (int k = 1; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
} 

    


    // for (int i = 1; i <= x; i++ ) {
    //     for (int j = 1; j <= x; j++ ) {
    //         if(j<=(x-i)) cout<<" ";
    //         else cout<<"*";
    //     }
    //     cout<<endl; 
    // }

    // if i + j >= n + 1 Then space else star
    