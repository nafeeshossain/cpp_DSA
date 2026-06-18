#include<iostream>
using namespace std;

int maze(int sr, int sc, int er, int ec){
    if (sr > er || sc > ec) return 0; //out of bound check
    if(sr==er || sc==ec) return 1; //base case
    return maze(sr+1,sc,er,ec) + maze(sr,sc+1,er,ec);
}

int main(){
    cout<<maze(0,0,3,3);
}