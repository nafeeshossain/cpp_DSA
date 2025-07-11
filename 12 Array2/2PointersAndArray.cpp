#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,1};
    int* ptr = arr; // Giving Address
    int* ptr1 = &arr[0]; // Same Giving Address
    cout<<ptr<<endl;
    ptr[0] = 8;
    for(int i = 0; i<=4; i++){
        cout<<ptr[i]<<" ";
    }
    return 0;
}