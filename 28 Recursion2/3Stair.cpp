#include<iostream>
using namespace std;


    
int Stair(int n) {
    if(n==2)return 2;
    if(n==1)return 1;
    return Stair(n-1) + Stair(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<Stair(n);
    
}