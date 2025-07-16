#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 4;
    for(int i=0;i<=n-1; i++){
        int x = 1;
        for(int j=0;j<=i;j++){
            cout<<x<<" ";
            x = x*(i-j)/(j+1);
        } cout<<endl;
    }


    return 0;
}