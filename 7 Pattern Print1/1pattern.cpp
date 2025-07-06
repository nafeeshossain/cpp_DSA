#include<iostream>
using namespace std;
int main(){

    int r,c;
    cout<<"No of Rows: ";
    cin>>r;
    cout<<"No of Columns: ";
    cin>>c;

    for(int i = 1; i<=r ; i++ ){
        for (int j = 1; j <= c; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    return 0;
}