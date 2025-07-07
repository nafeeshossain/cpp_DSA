#include<iostream>
using namespace std;
int main(){

//     *
//    **
//   ***
//  ****

    int x;
    cin>>x;

    for(int i=1; i<=x ; i++){
        for(int j=1; j<=(x+1-i); j++){
           cout<<" "; 
        }
        for(int k=1; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}