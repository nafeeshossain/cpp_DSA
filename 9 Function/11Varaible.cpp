#include<iostream>
#include<cmath>
using namespace std;
int a; //Global Variable

void fun(int x, int y){
}

void f(){
    cout<<a;
    // cout<<b; No 
}
int main(){
    int b = 2; //Local Variable
    cout<<a+3<<endl;
}


