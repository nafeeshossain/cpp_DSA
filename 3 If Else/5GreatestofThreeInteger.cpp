#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter The Three Integer: ";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a<<" is the Greatest Integer";
    }if(b>a && b>c){
        cout<<b<<" is the Greatest Integer";
    }if(c>a && c>b){
        cout<<c<<" is The Greatest Integer";
    }

    return 0;
}