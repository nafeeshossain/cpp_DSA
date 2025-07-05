#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter The Integers: ";
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<a<<" Greatest";
        }else{ 
            cout<<c<<" Greatest";
        }
    }else{
        if(b>c){
            cout<<b<<" Greatest";
        }else{ 
            cout<<c<<" Greatest";
        }
    }



    return 0;
}