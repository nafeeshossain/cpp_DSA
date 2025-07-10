#include<iostream>
using namespace std;
int main(){
    int x = 4;
    int* p=&x;
    x = 5;
    cout<<*p; // 5

cout<<endl;

    int y = 4;
    int* q=&y;
    cout<<y<<endl; //4
    *q = 10;
    cout<<y; //10



    return 0;
}