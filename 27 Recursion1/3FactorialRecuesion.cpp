#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1) { return 1; } // base case
    return n * fact(n-1); // recursive call
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}