#include<iostream>
using namespace std;
int main(){

    int x, y = 0;
    cout<<"Number: ";
    cin>>x;

    for(int i = 1; i<=x ; i++ ){ // Dont make both loop integer same 
        // cout<<i<<" ";
        for (int j = 1; j <= x; j++ )
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}