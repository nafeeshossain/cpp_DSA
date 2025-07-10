#include<iostream>
using namespace std;
int main(){
    int arr[6] = {1,2,3,4,1,1};
    int a = 1;
    for(int i = 0; i<=5; i++){
        a = a * arr[i];

    }
    cout<<a;

    return 0;
}