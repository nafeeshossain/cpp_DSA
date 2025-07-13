#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Row: ";
    cin>>m;
    cout<<"Column: ";
    cin>>n;
    int arr2[m][n];
    cout<<"OK! Enter Elements: ";

    for(int i=0; i<m; i++){ // ROW
        for (int j = 0; j < n; j++){ //COLUMN
            cin>>arr2[i][j];
        } 
    }

    for(int i=0; i<m; i++){ //Row
        for (int j = 0; j < n; j++){ //Column
            cout<<arr2[i][j]<<" ";
        } cout<<endl;
        
    }

}