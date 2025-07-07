#include<iostream>
using namespace std;
int main(){

//     *
//    ***
//   *****
//  *******

    int x;
    cin>>x;

    int a=1;
    for(int i=1; i<=x ; i++){
        for(int j=1; j<=(x+1-i); j++){
           cout<<" "; 
        }
        for(int k=1; k<=a; k++){
            cout<<"*";
        }
        a+=2;
        cout<<endl;
    }

    return 0;
}