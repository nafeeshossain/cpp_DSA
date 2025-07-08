#include<iostream>
#include<cmath>
using namespace std;

int fact(int n){
    int a=1;
    for(int i=1; i<=n; i++){
        a = a * i;
    }
    return a;
}

int main(){
    int x,y,nPr,nCr;
    cin>>x>>y;

    nPr = fact(x) / fact(x-y); //nPr
    nCr = fact(x) / (fact(y)*fact(x-y)); //nCr
    cout<<"nPr = "<<nPr<<endl; ;
    cout<<"nCr = "<<nCr;
}


