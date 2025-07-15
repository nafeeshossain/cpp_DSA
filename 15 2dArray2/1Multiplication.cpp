#include<iostream>
using namespace std;

int main(){

    int m,n,M,N;
    cout<<"Row: ";
    cin>>m;
    cout<<"Column: ";
    cin>>n;
    int arr1[m][n];
    cout<<"OK! Enter Elements: ";

    for(int i=0; i<m; i++){ for (int j = 0; j < n; j++){ cin>>arr1[i][j]; } }

    for(int i=0; i<m; i++){ // ROW
        for (int j = 0; j < n; j++){ //COLUMN
            cout<<arr1[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;

    cout<<"Row: ";
    cin>>M;
    if (n != M) { cout << "Matrix multiplication not possible. Columns of 1st != Rows of 2nd." << endl;
    return 1;}

    cout<<"Column: ";
    cin>>N;
    int arr2[M][N];
    cout<<"OK! Enter Elements: ";

    for(int i=0; i<M; i++){ for (int j = 0; j < N; j++){ cin>>arr2[i][j]; } }

    for(int i=0; i<M; i++){ // ROW
        for (int j = 0; j < N; j++){ //COLUMN
            cout<<arr2[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < N; j++){
            int sum=0;
            for (int k = 0; k < n; k++){
                sum+=(arr1[i][k] * arr2[k][j]);
            } cout<<sum<<" ";
        } cout<<endl;
    } return 0;
}