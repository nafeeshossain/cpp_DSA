#include<iostream>
using namespace std;
int main(){

    int x;
    cout<<"Number: ";
    cin>>x;
int a = 1;
for (int i = 1; i <= x; i++ ) {
        for (int j = 1; j <= i; j++ ) {
                cout<<a<<" ";
                a+=1;
        }
        cout<<endl; 
    }
    
}