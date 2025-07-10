#include<iostream>
using namespace std;

int main(){
    int x, a;
    cin>>x;
    a = x%10;
    while (x>10)
    {
        x = x / 10;
    }
    cout<<a<<" "<<x;
    
}