#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    if(n%2==0) cout<<-(n/2);
    
    // for (int i = 1; i <= n; i++) //1-2+3-4+5-6...
    // {
    //     if(i%2!=0) sum+=i;
    //     else sum-=i;
    // }
      
    return 0;
}