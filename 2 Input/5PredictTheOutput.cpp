#include<iostream>
using namespace std;
int main(){
    bool p = false;
    bool q = false;
    bool r = true;
    cout<<(p==q!=r);
    return 0;

    int x = 1;
    int y = 2;
    int z = 2;
    cout<<(x==y==z); 
    //(x==y)==(z) -> (0)==2 -> 0 Left to Right
}