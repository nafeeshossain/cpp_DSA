#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,1};
    int* ptr = arr;
    cout<<ptr<<endl;
    ptr[0] = 8;
    for(int i = 0; i<=4; i++){
        cout<<ptr[i]<<" ";
    }
    return 0;
}