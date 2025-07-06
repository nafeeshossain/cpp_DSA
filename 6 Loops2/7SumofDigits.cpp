#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int a, sum = 0; // a is the last digit
    while (n>0)
    {
        a=n%10;
        n/=10;
        sum+=a;
    }
    cout<<sum;
      
    return 0;
}