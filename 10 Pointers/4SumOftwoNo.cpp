#include<iostream>
using namespace std;
int main(){
    int x,y;
    int* p = &x;
    int *q = &y;
    cin>>*p;
    cin>>*q;
    cout<<*p + *q;





    return 0;
}