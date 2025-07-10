#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,6,7,40,5};
    int a = arr[1];
    for (int i = 0; i < 4; i++)
    {
        if(a<arr[i]) a = arr[i];
    }
    cout<<a;
    
    
    return 0;
}