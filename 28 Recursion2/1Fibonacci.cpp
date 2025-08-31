#include<iostream>
using namespace std;


    
int Recfib(int n) {
    if(n==0){ return 0;}
    if(n==1 || n==2){return 1;}
    return Recfib(n-1)+Recfib(n-2);
}
int Loopfib(int n){
    int a = 0, b = 1;
    if(n==1){ return 0;}
    if(n==2){ return 1;}
    for(int i=0; i<n-2; i++){
        int temp = b;
        b = a + b;
        a = temp;
    } return b;
}
int main(){
    int n;
    cin>>n;
    cout<<Recfib(n);
    
}