#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,1};
    int* ptr = arr;
    for(int i = 0; i<=4; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
    ptr = arr; //ptr is pointing to 1st element

    *ptr = 8;
    ptr++;     //ptr is pointing to 2nd element
    *ptr = 9;
    ptr--;     //ptr is pointing to 1st element

    for(int i = 0; i<=4; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;

    return 0;
}