#include<iostream>
#include<vector>
#include<climits>

using namespace std;
int main(){
    int arr[] = {1,2,4,5,9,15,18,21,24};
    int x = 12;
    int n = 8;

    bool flag = false;
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid]==x){
            flag = true;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]<x) lo = mid + 1;
        else hi = mid - 1;
    } if(flag==false) cout<<arr[hi];
    
    return 0;
}