#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    int count = 0;
    int a=n;
    while (n>0)
    {
        n/=10;
        count++;
    }
    if(a==0) cout<<1;
    else cout<<count;
    
    //myy codeee
    // int i;
    // for (i = 1; n>0; i++)
    // {
    //     n = n/10;
    //     if (n==0)
    //     {
    //         cout<<i;
    //     }
        
    // }

    
    
    return 0;
}