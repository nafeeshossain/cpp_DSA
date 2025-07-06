#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int sum = 0;

    if(n%2==0) sum = -(n/2);
    else sum = -(n/2) + n;

    // for (int i = 1; i <= n; i++) //1-2+3-4+5-6...
    // {
    //     if(i%2!=0) sum+=i;
    //     else sum-=i;
    // }


    cout<<sum;
    
      
    return 0;
}