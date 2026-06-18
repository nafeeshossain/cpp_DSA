#include<iostream>
using namespace std;

int pow(int x, int n){
    if(n==0) return 1;
    if(n==1) return x;
    int ans = pow(x,n/2);
    if(n%2==0){ return ans*ans; 
    } else { return x*ans*ans; }
}

int main(){
    int x,n;
    cout<<"Base = ";
    cin>>x;
    cout<<"Power = ";
    cin>>n;
    cout<<pow(x,n);
}
