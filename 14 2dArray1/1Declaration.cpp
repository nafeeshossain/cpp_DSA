#include<iostream>
using namespace std;
int main(){
    int arr1[3];
    int arr2[3][3]={1,2,3,4,5,6,7,8,9};

    // for(int i=0; i<3; i++){ // ROW
    //     for (int j = 0; j < 3; j++){ //COLUMN
    //         cin>>arr2[i][j];
    //     } 
    // }

    for(int i=0; i<3; i++){ //Row
        for (int j = 0; j < 3; j++){ //Column
            cout<<arr2[i][j]<<" ";
        } cout<<endl;
        
    }

}