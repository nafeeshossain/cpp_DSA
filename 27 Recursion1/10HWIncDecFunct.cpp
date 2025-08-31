#include <iostream>
using namespace std;
void Inc(int n){
    if(n==1){ cout<<1<<" "; return; }
    Inc(n-1);
    cout<<n<<" ";
}
void Dec(int n){ 
    if(n==1){ cout<<1<<" "; return; }
    cout<<n<<" ";
    Dec(n-1);
}


int main(){
    Inc(5);
    Dec(5);
}