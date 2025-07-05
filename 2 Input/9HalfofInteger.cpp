// Take Integer as a input and print half of the number
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the Numbers = ";
    cin>>x;
    cout<<x/2<<endl; //Without Type Casting problem with the prime number it only show the integer
    cout<<(float)x/2; //With Type Casting

    return 0;
}