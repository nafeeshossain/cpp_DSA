#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Range of Array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<=n-1; i++) { cin>>arr[i]; }
    for(int i=0; i<=n-1; i++) { cout<<arr[i];
        if(i<n-1) cout<<",";
    }
    return 0;
}