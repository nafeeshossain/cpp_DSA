#include<iostream>
using namespace std;
int main(){ //Good Question
    

    int a = 100; // 100 97 94 ... 7 4 1 // Using AP
    for(int j = 1 ; j <= 34 ; j++){
        cout<<a<<" ";
        a = a - 3;

        if(j==34) cout<<endl;
    }

    int b = 100; // 100 97 94 ... 7 4 1 // Using AP Don't have to calculate last number of term
    for(int k = 1 ; b>0 ; k++){
        cout<<b<<" ";
        b = b - 3;
    }
    cout<<endl;

    for(int i = 100 ; i > 0 ; i-=3) { cout<<i<<" "; } // My Method

}