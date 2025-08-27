#include<iostream>
using namespace std;

void greet(){ cout<<"Godd Morning"<<endl; }
int add(int a,int b){ return a+b; }
int main(){
    cout<<add(1,2)<<endl; // Integer Function
    greet(); // Void Function
    cout<<add(3,4)<<endl; 
    greet();
    int a = 1, b = 2;
    cout<<a<<" "<<b<<endl;
    swap(a,b); // Build in Function
    cout<<a<<" "<<b<<endl;
    cout<<max(a,b); // Build in Function
}