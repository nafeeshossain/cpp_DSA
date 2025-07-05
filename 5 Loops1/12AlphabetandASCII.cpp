#include<iostream>
using namespace std;
int main(){ 
    
    cout<<"Capital and Small Alphabet with there ASCII values"<<endl<<endl;

    for (char CH = 'A'; CH <= 'Z'; CH++)
    {
        cout<<CH<<" = "<<int(CH)<<" ";
    }
    cout<<endl<<endl;

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        cout<<ch<<" = "<<int(ch)<<" ";
    }

    cout<<endl<<endl;

    for (int i = 65 ; i<=90 ; i++) //Reverse Thing
    {
        cout<<(char)i<<i<<" ";
    }

    cout<<endl<<endl;

    // char joke;
    // cout<<"Enter Character : ";
    // cin>>joke;
    // cout<<joke<<" = "<<int(joke);
    
    
    
    

}