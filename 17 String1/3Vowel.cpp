#include<iostream>
#include<string>

using namespace std;
int main(){

    int n;
    cin>>n;

    char str[n];
    cin>>str;
    int a=0;

    for(int i=0; i<n; i++){
        if(str[i]=='a' || str[i]=='e' ||str[i]=='i' || str[i]=='o' || str[i]=='u'){
            a++;
        }
    } cout<<a;


    return 0;
}