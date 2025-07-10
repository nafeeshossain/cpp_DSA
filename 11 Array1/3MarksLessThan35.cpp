#include<iostream>
using namespace std;
int main(){

    int arr[6] = {90,45,30,50,20,75};
    for(int i=0; i<=5; i++) { 
        if(arr[i]<35) cout<<i<<" ";
    }
    return 0;
}