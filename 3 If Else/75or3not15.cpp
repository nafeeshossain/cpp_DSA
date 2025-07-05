#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Character: ";
    cin>>n;

    // if((n%5==0 || n%3==0) && n%15!=0){
    //     cout<<n<<" Divisable";
    // }else{
    //     cout<<n<<" isn't Divisible";
    // }

    if(n%5==0 || n%3==0){
        if(n%15!=0){
            cout<<"Divisable by 5 or 3 but not 15";
        }else{
            cout<<"Not Match";
        }
    }else{
            cout<<"Not Match";
        }
    return 0;
}