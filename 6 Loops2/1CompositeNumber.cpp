#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool flag = true;
    for (int i = 2 ; i<=(n-1) ; i++) { // sir do this
        if (n%i==0) {
            flag = false;
            break;
        }
    }
    if(n==1) cout<<"1 isn't a prime or Composite";
    else if (flag==true) cout<<n<<" is a Prime Number";
    else cout<<n<<" isn't Prime Number";

    // I do this

    // for(int i = 2 ; i<n ; i++) {
    //     if(n%i==0) cout<<"The Number is Composite";
    //     else cout<<"The NUmber is a Prime Number";
    //     break;
    
    // }
    
    return 0;
}