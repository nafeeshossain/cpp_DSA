#include<iostream>
#include<vector>
using namespace std;

void  BinStr(int n, string a){
    if(n==0){ 
        cout<<a<<endl;
        return;
    }
    BinStr(n-1,a+'0');
    if(a=="" || a[a.length()-1] == '0') BinStr(n-1,a+'1');
}

int main(){
    int n=3;
    string a = "";
    BinStr(n, a);


}
