#include<iostream>
#include<vector>
using namespace std;

int ComDiv(int a, int b){
    if(a==0) return b;
    ComDiv(b%a,a);
}

int main(){
    int a = 10001;
    int b = 10000;
    cout<<ComDiv(a,b);


}
