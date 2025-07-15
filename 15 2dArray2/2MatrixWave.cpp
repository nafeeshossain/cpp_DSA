#include<iostream>
using namespace std;

int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    for (int i = 0; i < 3; i++){
        if(i%2==0){
            for (int j = 0; j < 3; j++){ 
            cout<<arr[i][j]<<" "<<i<<j<<" ";
        }} else {for (int k = 3; k > 0; k--){
            cout<<arr[i][k]<<" "<<i<<k<<" ";}}
    } return 0;
}