#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0; i<=n-1; i++){ //Like Dynamic Programming use previuos to generate next
        int x = 1;
        for(int j = 0; j<=i; j++){
            cout<<x<<" ";
            x = x* (i-j) / (j+1); // Optimized then afctorial
        }
        cout<<endl;
    }


}


