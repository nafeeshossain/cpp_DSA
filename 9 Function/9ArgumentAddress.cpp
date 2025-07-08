#include<iostream>
#include<cmath>
using namespace std;

void fun(int x, int y){

    cout<<"Fun x Address: "<<&x<<endl;
    cout<<"Fun y Address: "<<&y<<endl;
}
int main(){
    int x = 3;
    int y = 5;

    cout<<"Main x Address: "<<&x<<endl;
    cout<<"Main y Address: "<<&y<<endl;

    fun(x,y);

}


