#include<iostream>
using namespace std;
int main(){

    int a,b,c;
    cin>>a>>b>>c;
    for(int k =1; k<=3; k++){
    for(int i = 1; i<=a; i++){
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    if(a == a) a=b;
    if(a == b) b=c;
}
    return 0;
}