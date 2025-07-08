#include<iostream>
using namespace std;
int Fact(int n){
    int fact = 1;
    for(int i=2; i<=n; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int a;
    cin>>a;
    for(int i=1; i<=a; i++){
    cout<<Fact(i)<<endl;
    }
}