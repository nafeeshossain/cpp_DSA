#include<iostream>
using namespace std;
void Display(int a[]){
    for(int i = 0; i<4;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void Change(int b[]){
    b[0] = 100;
}
int main(){
    int arr[] = {1,2,3,4,1};
    Display(arr);
    Change(arr);
    Display(arr);

    return 0;
}