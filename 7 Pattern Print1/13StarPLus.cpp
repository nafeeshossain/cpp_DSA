#include<iostream>
using namespace std;
int main(){

    int x;
    cout<<"Ractangle side: ";
    cin>>x;
int mid = ((x/2)+1);
for (int i = 1; i <= x; i++ ) {
        for (int j = 1; j <= x; j++ ) {
            if(j==mid || i==mid ) { cout<<"*";
            } else { cout<<" "; }
        }
        cout<<endl;
    }
    
}