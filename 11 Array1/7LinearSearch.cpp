#include<iostream>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    int arr[] = {1,2,3,4,5,6,4,8};
    bool flag = false;
    for (int i = 0; i < 8; i++) {   
        if(n == arr[i]) { flag = true;
        a = i;
        break;}
    }
    if(flag == true) cout<<"Number Present at "<<a;
    else cout<<"Not found";

    // for (int i = 0; i < 9; i++)
    // {
    //     if(n == arr[i]) { 
    //         cout<<i;
    //     }

    // }
    
    return 0;
}