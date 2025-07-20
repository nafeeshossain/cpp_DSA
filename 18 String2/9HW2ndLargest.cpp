#include<iostream>
#include<string>

using namespace std;
int main(){
    string s;
    cin>>s;
    char max = 0;
    for(int i=0; i<s.length(); i++){
        // cout<<i<<" "<<s[i]<<" "<<max<<endl;
        if(max<s[i]) max = s[i];
    } cout<<max<<endl;
    char max2 = 0;
    for(int j=0; j<s.length(); j++){
        cout<<j<<" "<<s[j]<<" "<<max2<<endl;
        if(max2<s[j] && s[j]!=max) max2 = s[j];
    } cout<<max2;

}