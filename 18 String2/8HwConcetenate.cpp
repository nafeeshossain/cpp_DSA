#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    string s;
    cin>>s;
    string temp = s;
    reverse(temp.begin(),temp.end());
    s+=temp;
    cout<<s;


}
