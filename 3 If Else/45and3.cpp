#include<iostream>
using namespace std;
int main(){

    cout<<"Enter a Integer: ";
    int n;
    cin>>n;
    // if(n%5==0 && n%3==0){ 

    //     cout<<"Divisable";

    if(n%15==0){

        cout<<"Divisable";

    }else{

        cout<<"Not a Three Digit Number";
    }
    return 0;
}
