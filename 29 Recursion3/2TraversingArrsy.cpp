#include<iostream>
using namespace std;
void tra(int a, int n, int arr[]){
    if(a==n){ return; }
    cout<<arr[a]<<" ";
    tra(a+1, n, &arr[0]);
}
int main(){
    int n = 4, a = 0;
    int arr[n] = {1, 2, 3, 4};
    tra(a, n, &arr[0]);
}