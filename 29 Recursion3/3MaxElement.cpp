#include<iostream>
#include<climits>
using namespace std;

void max1(int arr[], int n, int idx, int max){
    if(idx==n){ 
        cout<<max;
        return; }
    if(arr[idx]>max){ max = arr[idx]; }
    max1(arr, n, idx+1, max);
}

int main(){
    int arr[] = {1, 2, 6, 9, 100, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    max1(arr, n, 0, INT_MIN);
}