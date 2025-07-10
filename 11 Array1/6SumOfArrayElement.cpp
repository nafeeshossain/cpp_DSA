#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Range: ";
    cin>>n;
    int arr[n],sum = 0;
    for(int i=0; i<=n-1; i++) { cin>>arr[i]; }
    for(int i=0; i<=n-1; i++) { 
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}