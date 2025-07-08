#include<iostream>
using namespace std;

int gcd(int x, int y){
    int hcf = 1;
        //24 60
        //24,23,22,..1
        for(int i=min(x,y); i>=1; i--){
        if(x%i==0 && y%i==0){
            hcf = i;
            break;}
    }
    // for(int i=1; i<=min(x,y); i++){
    //     if(x%i==0 && y%i==0) hcf = i;
    // }
    return hcf;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<gcd(x,y);
}


// int main(){
//     int x,y;
//     cin>>x>>y;
//     int a = x<y?x:y;
//     int b;
//     for(int i=1; i<=a; i++){
//         if(x%i==0 && y%i==0) b = i;
//     }
//     cout<<b;
//     return 0;
// }