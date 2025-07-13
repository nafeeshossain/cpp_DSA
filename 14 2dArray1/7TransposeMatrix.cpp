#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Row: ";
    cin>>m;
    cout<<"Column: ";
    cin>>n;
    int arr1[m][n];
    cout<<"OK! Enter Elements: ";
    int arr2[n][m];

    //Input
    for(int i=0; i<m; i++){ // ROW
        for (int j = 0; j < n; j++){ //COLUMN
            cin>>arr1[i][j];
        } 
    }

    //Transpose
    for(int i=0; i<m; i++){ //Row
        for (int j = 0; j < n; j++){ //Column
            arr2[j][i]=arr1[i][j];
            cout<<arr1[i][j]<<" ";
        } cout<<endl;
    }

    //Output Transpose
    for(int i=0; i<n; i++){ //Row
        for (int j = 0; j < m; j++){ //Column
            cout<<arr2[i][j]<<" ";
        } cout<<endl; 
    }

}