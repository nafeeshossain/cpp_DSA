#include<iostream>
using namespace std;

int main(){
    // int* ptrr; //This Address change everytime you print    
    // cout<<ptrr;

    int* ptr = NULL; //Reserved Address
    cout<<ptr<<endl;; //0x0
// NULL can written as '\0'
//'\' -> Null Character - '0'
// char ch = '\0';
// cout<<int(ch); ASCII Value is 0

    int* ptr1 = NULL;
    int* ptr2 = 0;
    int* ptr3 = '\0';
    cout<<ptr1<<" "<<ptr2<<" "<<ptr3; //All value are same
    
}