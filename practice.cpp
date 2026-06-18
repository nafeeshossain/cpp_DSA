#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i=0; i<n; i++){
        cout<<string(n-i,' ')<<string(2*i+1,'*')<<"\n";
    }
}

// int main(){
//     int n = 1;
//     for(int i=0; i<4; i++){
//         for(int j=i; j<4; j++){
//             cout<<" ";
            
//         }   
//         for(int k=0; k<n; k++){
//             cout<<"*";
            
//         }n+=2;
//         cout<<endl;
//     }
// }