#include<iostream>
#include<string>

using namespace std;
int main(){

    string str = "Nafees";
    cout<<str<<endl;

    // string s;
    // cin>>s;
    // cout<<s; // Problem with spaces

    string s;
    getline(cin,s);
    cout<<s;



    return 0;
}