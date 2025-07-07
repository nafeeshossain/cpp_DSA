#include<iostream>
using namespace std;
int main(){

    //     *
    //    ***
    //   *****
    //  *******
    
    int x;
    cin>>x;
    int nst = 1;
    int nsp = x-1;

    for (int i = 1; i <= x; i++){
        for(int j = 1; j<=nsp; j++){ //Space
            cout<<" "; }
        nsp--;
        for(int k = 1; k<=nst; k++){
            cout<<"*";
        }
        nst+=2;
        cout<<endl;
        
    }
    

    return 0;
}