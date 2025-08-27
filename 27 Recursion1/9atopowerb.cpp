#include<iostream>
using namespace std;

int power(int a, int b){
    if(b==1){ return a; }
    int ans = a * power(a,b-1);
    return ans;
}
int main(){
    cout<<power(2,6);
}