#include<iostream>
using namespace std;
int main(){

    int x;
    cout<<"Ractangle side: ";
    cin>>x;
for (int i = 1; i <= x; i++ ) {
        for (int j = 1; j <= x; j++ ) {
            if((i==j) || ((i+j)==(x+1))) { cout<<"*";
            } else { cout<<" "; }
        }
        cout<<endl;
    }
    
}