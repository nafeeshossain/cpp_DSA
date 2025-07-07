#include<iostream>
using namespace std;
int main(){

//    1
//   121
//  12321

    int x;
    cin>>x;
    for(int i=1; i<=x ; i++){
        for(int j=1; j<=(x+1-i); j++){
           cout<<" "; 
        }
        for(int k=1; k<=i; k++){
            cout<<k;
        }
        for(int l=i-1; l>=1; l--){
            cout<<l;
        }
        cout<<endl;

    }

    return 0;
}