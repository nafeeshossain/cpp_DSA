#include<iostream>
using namespace std;

void greeting(int x){

    for(int i = 1; i<=x; i++){
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){

    int a,b,c;
    cin>>a>>b>>c;

    greeting(a);
    greeting(b);
    greeting(c);
    
    return 0;
}