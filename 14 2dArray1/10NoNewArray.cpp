#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Row/Column: ";
    cin>>m;
    cout<<"OK! Enter Elements: ";
    int arr[m][m];

    //Input
    for(int i=0; i<m; i++){ // ROW
        for (int j = 0; j < m; j++){ //COLUMN
            cin>>arr[i][j];
        } 
    }
    //Output Before Transpose
    for(int i=0; i<m; i++){ //Row
        for (int j = 0; j < m; j++){ //Column
            cout<<arr[i][j]<<" ";
        } cout<<endl; 
    } cout<<endl;

    for(int i=0; i<m; i++){ //Row
        for (int j = i+1; j < m; j++){ //Column
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
    
        }
    }
    for(int i=0; i<m; i++){ //Row
        for (int j = i+1; j < m; j++){ //Column
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
    
        }
    }
    // int i = 0;
    // while (i=m)
    // {
    // int temp = arr[i][];
    // arr[i][j] = arr[j][i];
    // arr[j][i] = temp;
    // i++;
    // }
    


    // My Ocervation Transpose
    // for(int i=0; i<m; i++){ //Row
    //     for (int j = 0; j < m; j++){ //Column
    //         // i=j skip
    //         if(i<j){
    //             int temp = arr[i][j];
    //             arr[i][j] = arr[j][i];
    //             arr[j][i] = temp;
    //         }
    //     }
    // }

    //Output Transpose
    for(int i=0; i<m; i++){ //Row
        for (int j = 0; j < m; j++){ //Column
            cout<<arr[i][j]<<" ";
        } cout<<endl; 
    }

}