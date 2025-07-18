#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){

    bool a = true;
    string s,t;
    cout<<"s: ";
    cin>>s;
    cout<<"t: ";
    cin>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<"True";
    else cout<<"False";
    

    return 0;
}