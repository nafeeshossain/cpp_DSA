#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int *ptr = &a;
    cout<<*ptr<<" "<<ptr<<endl;
    // ptr = ptr + 1; //Adsress goes 4 bytes - but the 5 value is not there in address so it output soething 8713479
    cout<<*ptr<<" "<<ptr<<endl;

    *ptr = *ptr + 1; //Ok
    // *ptr++; warning error
    (*ptr)++; //ok

    cout<<*ptr<<" "<<ptr;
    




}