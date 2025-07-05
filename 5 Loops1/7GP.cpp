#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;

    // for(int i=1; i<=((2*n)-1) ; i+=2) { cout<<i<<" "; }

    int a = 1; // 1 3 5 7 9 11 13 . . .
    for(int i = 1 ; i <= n ; i++){
        cout<<a<<" ";
        a = a*2;
        if(i==n) cout<<endl;
    }

}