#include<iostream>
using namespace std;
int main(){ 

    for(int i = 100 ; i > 0 ; i-=3) { cout<<i<<" "; } // For Loop
    cout<<endl;

    int j = 100; // While Loop
    while (j>0)
    {
        cout<<j<<" ";
        j-=3;
    }
    cout<<endl;
    
    int k = 100; // Haaaaa This also works
    for (;k>0;){ cout<<k<<" ";
        k-=3; }

    

}