#include<iostream>
#include<string>

using namespace std;
int main(){
    string s;
    cin>>s;
    int i = 0;
    int j = s.size()-1;
    bool flag = 1;
    while(i<j){
        if(s[i]!=s[j]) {flag = 0; break;}
        i++; j--;
    }
    if(flag==1) cout<<"Plaindrome";
    else cout<<"Not a Plaindrome";
}