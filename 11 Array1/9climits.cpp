#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5] = {10,6,7,40,5};
    int max = INT_MIN;
    cout<<INT_MIN<<endl;
    for (int i = 0; i < 4; i++)
    {
        if(max<arr[i]) max = arr[i];
    }
    cout<<max;
    
    
    return 0;
}