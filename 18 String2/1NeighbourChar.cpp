#include<iostream>
#include<string>

using namespace std;
int main(){

    string s;
    cin>>s;
    int a = 0;
    int n = s.length();
    
    for(int i=0; i<n; i++){
        if(n==0){break;} //a
        if(n==2 && s[0]!=s[1]){a=1; break;} //ab
        if(i==0) {if(s[i]!=s[i+1]) a++;}
        else if(i==n-1) {if(s[i]!=s[i-1]) a++;}
        else if(s[i]!=s[i-1] && s[i]!=s[i+1]) a++;
    } 
    cout<<a;

    return 0;
}