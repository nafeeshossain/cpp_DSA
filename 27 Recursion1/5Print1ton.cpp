#include<iostream>
using namespace std;
int a = 1;
void print(int n){
    // base case
    if(n==0) { return; } 
    // recursive call
    cout<<a<<" ";
    a++;
    print(n-1);
}
int main(){
    int n;
    cin>>n;
    print(n);
}