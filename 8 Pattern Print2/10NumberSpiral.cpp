#include<iostream>
using namespace std;
int main() {

    int n;
    cin>>n; 
    for(int i = 1; i<=2*n-1; i++){
        for(int j = 1; j<=2*n-1; j++){
            int a = i;
            int b = j;
            if(a>4) a = 2*n-i;
            if(b>4) b = 2*n-j;
            cout<<min(a,b)<<" ";

            
        }
        cout<<endl;
    }

    

    return 0 ;
}