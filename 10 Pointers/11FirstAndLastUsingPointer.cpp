#include<iostream>
using namespace std;

void find(int n, int* ptr1, int* ptr2){
    *ptr2 = n%10;
    while (n>9)
    {
        n/=10;
    }
    *ptr1 = n;
    return;   
}
int main(){
    int n, First, Last;
    cin>>n;
    int *ptr1 = &First;
    int *ptr2 = &Last;
    find(n,ptr1,ptr2);
    cout<<First<<" "<<Last;
}