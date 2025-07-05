#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter The Character: ";
    cin>>a;
    int x = (int)a;

    // if(a>=97 && a>=122){
    //     cout<<a<<" is an Alphabet (small)";
    // }else if(a>=65 && a<=90){
    //     cout<<a<<" is an Alphabet (Capital)";
    if((a>=97 && a>=122) || (a>=65 && a<=90)){
        cout<<a<<" is an Aplhabet";
    }else{
        cout<<a<<" isn't an Alphabet";
    }
    return 0;
}