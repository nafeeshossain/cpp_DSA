//Take Float input and print the fraction part of it
#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter The Float Number = ";
    cin>>x;
    int y = (int)x;
    if(y<0) y = y - 1;
    float z = x - (float)y; //Wrong for Minus
    cout<<"Fraction Part = "<<z;


    return 0;
}