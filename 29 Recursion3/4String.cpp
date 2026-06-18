#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Raghav Garg";
    string s = "A";
    for(int i=0; i<str.length(); i++){
        if(str[i] != 'a') s = s + s;
    }
    cout << s;
}
