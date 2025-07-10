#include<iostream>
using namespace std;

int main(){

    int x = 5;
    int* ptr = &x;
    int** p = &ptr; //Double Pointer
    int*** q = &p;  //Triple Pointer

    cout<<x<<endl;    //Value of x
    cout<<*ptr<<endl; //Value of x
    cout<<**p<<endl;  //Value of x 
    cout<<***q<<endl; //Value of x

    cout<<&x<<endl;  // Address of x
    cout<<ptr<<endl; // Address of x
    cout<<*p<<endl;  // Address of x
    cout<<**q<<endl; // Address of x
    
}