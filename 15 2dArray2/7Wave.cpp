#include<iostream>
using namespace std;
int main(){
    int arr1[3][3] = {1,2,3,4,5,6,7,8,9};
    int m=3,n=3;

    for(int i=0; i<m; i++){

        if(i%2==0)
        for(int j=n-1; j>=0; j--){
            cout<<arr1[j][i]<<" ";
        }
        else 
        for(int j=0; j<n; j++){
            cout<<arr1[j][i]<<" ";
        }

    }
}