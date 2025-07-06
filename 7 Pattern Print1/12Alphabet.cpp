#include<iostream>
using namespace std;
int main(){

    int x;
    cout<<"Ractangle side: ";
    cin>>x;

    // for (int i = 1; i <= x; i++ ) {
    //     char ch = 'A';
    //     for (int j = 1; j <= x; j++ ) {
    //         cout<<ch;
    //         ch+=1;
    //     }
    //     cout<<endl;
    // }
    
    for (int i = 1; i <= x; i++ ) {
        for (int j = 1; j <= x; j++ ) {
            cout<<(char)(j+64);
        }
        cout<<endl;
    }
    
}