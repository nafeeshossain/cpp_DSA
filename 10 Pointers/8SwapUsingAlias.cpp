#include<iostream>
using namespace std;
void swap(int &a,int &b){ // Pass by Reference - look like a error but it actually working - remember ittttt
    int temp = a;
    a = b;
    b = temp;
    return ;
}

int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;

}