#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int nst = 1;
    int nsp = x-1;

    for (int i = 1; i <= 2*x-1; i++){
        for(int j = 1; j<=nsp; j++){ //Space
            cout<<" "; }
        if(i<=x-1) nsp--;
        else nsp++;
        for(int k = 1; k<=nst; k++){
            cout<<"*";
        }
        if(i<=x-1) nst+=2;
        else nst-=2;
        cout<<endl;
        
    }
    

    return 0;
}