#include<iostream> // Pass by Reference
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return ;
}

int main(){
    int x,y;
    cin>>x>>y;
    int* a = &x;
    int* b = &y;
    swap(a,b);
    cout<<a<<" "<<b;

}