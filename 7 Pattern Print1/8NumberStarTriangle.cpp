#include<iostream>
using namespace std;
int main(){

    int x;
    cout<<"No: ";
    cin>>x;

    for (int i = 1; i <= x; i++ ) {
        for (int j = 1; j <= i; j++ ) {
            cout<<j;
        }
        cout<<endl;
    }
    
}