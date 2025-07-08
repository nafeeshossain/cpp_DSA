#include<iostream>
#include<cmath>
using namespace std;

int fact(int n){
    int a=1;
    for(int i=1; i<=n; i++){ a = a * i; }
    return a; }
int com(int x, int y){
    int a = fact(x) / (fact(y)*fact(x-y));
    return a;}

int main(){
    int n;
    cin>>n;
    // cout<<"  ";
    // for(int k = 0; k<=n-1; k++) cout<<k<<" "; // Just Fun
    // cout<<endl;
    for(int i=0; i<=n-1; i++){
        // cout<<i<<" ";
        for(int j = 0; j<=i; j++){
            cout<<com(i,j)<<" ";
        }
        cout<<endl;
    }


}


