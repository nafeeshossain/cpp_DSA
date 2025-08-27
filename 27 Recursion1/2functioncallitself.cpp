#include<iostream>
using namespace std;

void greet(int n){ 
    if(n==0){ return;}
    cout<<"Godd Morning"<<endl; 
    greet(n-1);
    return;
}

int main(){
    int n;
    cin>>n;
    greet(n);
}