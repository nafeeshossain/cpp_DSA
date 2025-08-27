#include<iostream>
using namespace std;

int sum1ton(int n){
    if(n==1){ return 1; }
    int sum = n + sum1ton(n-1);
    return sum;
}
int main(){
    cout<<sum1ton(5);
}