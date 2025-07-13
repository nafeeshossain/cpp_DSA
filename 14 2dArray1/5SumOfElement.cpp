#include<iostream>
#include<climits>
using namespace std;
int main(){

    int m,n;
    cout<<"Row: ";
    cin>>m;
    cout<<"Column: ";
    cin>>n;
    int arr[m][n];
    cout<<"OK! Enter Elements: ";

    for(int i=0; i<m; i++){ // ROW
        for (int j = 0; j < n; j++){ //COLUMN
            cin>>arr[i][j];
        } 
    }
    int a = 0;
    for(int i=0; i<m; i++){ //Row
        for (int j = 0; j < n; j++){ //Column
           a+=arr[i][j];
        }
        
    } cout<<a;


}
