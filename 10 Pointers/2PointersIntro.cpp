#include<iostream>
using namespace std;
int main(){
    int x = 4;
    int* p=&x;

    char y;
    char* q=&y;

    cout<<&x<<endl;
    cout<<p<<endl;

    cout<<&y<<endl;
    cout<<q;


    return 0;
}