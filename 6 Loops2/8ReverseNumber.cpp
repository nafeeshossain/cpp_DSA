#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int LastDigit = 0;
    int Reverse = 0;

    while (n>0)
    {
        Reverse*=10;
        LastDigit=n%10;
        Reverse+=LastDigit;
        n/=10;
    }
    cout<<Reverse;

    // It also Reverse but without string it

    // int a;
    // while (n>0)
    // {
    //     a=n%10;
    //     n/=10;
    //     cout<<a;
    // }
      
    return 0;
}