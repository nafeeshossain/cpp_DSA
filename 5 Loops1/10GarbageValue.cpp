#include<iostream>
using namespace std;
int main(){ 

    int i;
    cout<<i<<endl; // no error assign it a garbage value
    
    int j; 
    while (j<=10) // This loop will run without any error but somtime if the garbage value match with the loop condition it will run
    {
        cout<<j<<" ";
        j++;
    }
    cout<<j; // In this way you see the garbage value
    

    

}