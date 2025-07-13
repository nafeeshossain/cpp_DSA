#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Row/Column: ";
    cin>>m;
    cout<<"OK! Enter Elements: ";
    int arr[m][m];
    int arr1[m][m];

    //Input
    for(int i=0; i<m; i++){ // ROW
        for (int j = 0; j < m; j++){ //COLUMN
            cin>>arr[i][j];
        } 
    }
    //Output Before 90 degree
    for(int i=0; i<m; i++){ //Row
        for (int j = 0; j < m; j++){ //Column
            cout<<arr[i][j]<<" ";
        } cout<<endl; 
    } cout<<endl;

    //90 degree
    for(int i=0; i<m; i++){ //Row
        for (int j = 0; j < m; j++){ //Column
            arr1[j][m-1-i]=arr[i][j];
        }
    }

    for(int i=0; i<m; i++){ //Row
        for (int j = 0; j < m; j++){ //Column
            cout<<arr1[i][j]<<" ";
        } cout<<endl; 
    }

}